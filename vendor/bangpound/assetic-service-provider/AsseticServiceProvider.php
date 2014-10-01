<?php

namespace Bangpound\Pimple\Provider;

use Assetic\Asset\AssetCollectionInterface;
use Assetic\Asset\AssetInterface;
use Assetic\AssetManager;
use Assetic\AssetWriter;
use Assetic\Factory\AssetFactory;
use Assetic\Factory\LazyAssetManager;
use Assetic\FilterManager;
use Assetic\Util\VarUtils;
use Pimple\Container;
use Pimple\ServiceProviderInterface;
use Symfony\Component\Console\Command\Command;
use Symfony\Component\Console\Input\InputArgument;
use Symfony\Component\Console\Input\InputDefinition;
use Symfony\Component\Console\Input\InputInterface;
use Symfony\Component\Console\Input\InputOption;
use Symfony\Component\Console\Output\OutputInterface;

class AsseticServiceProvider implements ServiceProviderInterface
{
    /**
     * Registers services on the given container.
     *
     * This method should only be used to configure services and parameters.
     * It should not get services.
     *
     * @param Container $pimple An Container instance
     */
    public function register(Container $pimple)
    {
        /**
         * Default configuration.
         */
        $pimple['assetic.debug'] = false;
        $pimple['assetic.env'] = 'dev';
        $pimple['assetic.assets'] = array();
        $pimple['assetic.variables'] = array();

        $pimple['assetic.java.bin'] = '/usr/bin/java';
        $pimple['assetic.node.bin'] = '/usr/bin/node';
        $pimple['assetic.node.paths'] = array();
        $pimple['assetic.ruby.bin'] = '/usr/bin/ruby';
        $pimple['assetic.sass.bin'] = '/usr/bin/sass';

        $pimple['assetic.asset_manager_names'] = array(
            'assetic.asset_manager',
            'assetic.lazy_asset_manager',
        );

        /**
         * Asset Factory configuration happens here
         *
         * @param Container $c
         * @return mixed
         */
        $pimple['assetic'] = function (Container $c) {
            // initializing lazy asset manager
            if (isset($c['assetic.assets']) && is_array($c['assetic.assets']) && !empty($c['assetic.assets'])) {
                $c['assetic.lazy_asset_manager'];
            }

            return $c['assetic.factory'];
        };

        /**
         * Factory
         *
         * @param Container $c
         * @return AssetFactory
         */
        $pimple['assetic.factory'] = function (Container $c) {
            $root    = isset($c['assetic.read_from']) ? $c['assetic.read_from'] : $c['assetic.write_to'];
            $factory = new AssetFactory($root, $c['assetic.debug']);
            $factory->setAssetManager($c['assetic.asset_manager']);
            $factory->setFilterManager($c['assetic.filter_manager']);
            assetic_init($factory);

            return $factory;
        };

        /**
         * Asset writer, writes to the 'assetic.write_to' folder
         *
         * @param Container $c
         * @return AssetWriter
         */
        $pimple['assetic.asset_writer'] = function (Container $c) {
            return new AssetWriter($c['assetic.write_to']);
        };

        /**
         * Asset manager
         *
         * @return AssetManager
         */
        $pimple['assetic.asset_manager'] = function () {
            return new AssetManager();
        };

        /**
         * Filter manager
         *
         * @return FilterManager
         */
        $pimple['assetic.filter_manager'] = function () {
            return new FilterManager();
        };

        /**
         * Lazy asset manager for loading assets from $pimple['assetic.assets']
         *
         * @param Container $c
         * @return \Assetic\Factory\LazyAssetManager
         */
        $pimple['assetic.lazy_asset_manager'] = function (Container $c) {
            $lazy     = new LazyAssetManager($c['assetic.factory']);

            foreach ($c['assetic.assets'] as $name => $formula) {
                $lazy->setFormula($name, $formula);
            }

            return $lazy;
        };

        /**
         * Console commands.
         */

        /**
         * Dumps all assets.
         *
         * @param Container $c
         * @return \Symfony\Component\Console\Command\Command
         */
        $pimple['assetic.command.dump'] = function (Container $c) {
            $command = new Command('dump');
            $command->setDescription('Dumps all assets to the filesystem')
                ->setDefinition($c['assetic.command.dump.definition'])
                ->setCode(function (InputInterface $input, OutputInterface $output) use ($c) {
                    $c['assetic.write_to'] = $input->getArgument('write_to') ?: $c['assetic.write_to'];

                    $output->writeln(sprintf('Dumping all <comment>%s</comment> assets.', $c['assetic.env']));

                    /** @var AssetManager $am */
                    foreach ($c['assetic.asset_manager_names'] as $id) {
                        $am = $c[$id];
                        if ($am instanceof LazyAssetManager) {
                            /** @var LazyAssetManager $am */
                            $output->writeln(sprintf('Debug mode is <comment>%s</comment>.', $am->isDebug() ? 'on' : 'off'));
                        }
                        $output->writeln('');

                        foreach ($am->getNames() as $name) {
                            $asset = $am->get($name);

                            if ($am instanceof LazyAssetManager) {
                                /** @var LazyAssetManager $am */
                                $formula = $am->getFormula($name);
                            }

                            // start by dumping the main asset
                            $c['assetic.helper.dump']($asset, $output);

                            if (!isset($formula[2])) {
                                continue;
                            }

                            $debug   = isset($formula[2]['debug'])   ? $formula[2]['debug']   : $am->isDebug();
                            $combine = isset($formula[2]['combine']) ? $formula[2]['combine'] : null;

                            // dump each leaf if debug
                            if (null !== $combine ? !$combine : $debug) {
                                foreach ($asset as $leaf) {
                                    $c['assetic.helper.dump']($leaf, $output);
                                }
                            }
                        }
                    }
                })
            ;

            return $command;
        };

        /**
         * @param Container $c
         * @return Command
         */
        $pimple['assetic.command.watch'] = function (Container $c) {
            $command = new Command('watch');
            $command->setDescription('Check for changes every second, debug mode only')
                ->setDefinition($c['assetic.command.watch.definition'])
                ->setCode(function (InputInterface $input, OutputInterface $output) use ($c) {
                    $c['assetic.write_to'] = $input->getArgument('write_to') ?: $c['assetic.write_to'];

                    /** @var LazyAssetManager $am */
                    $am = $c['assetic.lazy_asset_manager'];

                    $output->writeln(sprintf('Dumping all <comment>%s</comment> assets.', $c['assetic.env']));
                    $output->writeln(sprintf('Debug mode is <comment>%s</comment>.', $am->isDebug() ? 'on' : 'off'));
                    $output->writeln('');

                    if (!$am->isDebug()) {
                        throw new \RuntimeException('The --watch option is only available in debug mode.');
                    } else {
                        $cache = sys_get_temp_dir().'/assetic_watch_'.substr(sha1($c['assetic.write_to']), 0, 7);
                        if ($input->getOption('force') || !file_exists($cache)) {
                            $previously = array();
                        } else {
                            $previously = unserialize(file_get_contents($cache));
                            if (!is_array($previously)) {
                                $previously = array();
                            }
                        }

                        $error = '';
                        while (true) {
                            try {
                                foreach ($am->getNames() as $name) {
                                    $formula = $am->hasFormula($name) ? serialize($am->getFormula($name)) : null;
                                    /** @var AssetInterface $asset */
                                    $asset = $am->get($name);

                                    $combinations = VarUtils::getCombinations(
                                        $asset->getVars(),
                                        $c['assetic.variables']
                                    );

                                    $mtime = 0;
                                    foreach ($combinations as $combination) {
                                        $asset->setValues($combination);
                                        $mtime = max($mtime, $am->getLastModified($asset));
                                    }

                                    if (isset($previously[$name])) {
                                        $changed = $previously[$name]['mtime'] != $mtime || $previously[$name]['formula'] != $formula;
                                    } else {
                                        $changed = true;
                                    }

                                    $previously[$name] = array('mtime' => $mtime, 'formula' => $formula);

                                    if ($changed) {
                                        $c['assetic.helper.dump']($asset, $output);
                                    }
                                }

                                // reset the asset manager
                                $am->clear();
                                $am->load();

                                file_put_contents($cache, serialize($previously));
                                $error = '';
                            } catch (\Exception $e) {
                                if ($error != $msg = $e->getMessage()) {
                                    $output->writeln('<error>[error]</error> '.$msg);
                                    $error = $msg;
                                }
                            }

                            sleep($input->getOption('period'));
                        }
                    }
                })
            ;

            return $command;
        };
        $pimple['assetic.command.dump.definition'] = $pimple->factory(function () {
            return new InputDefinition(array(
                new InputArgument('write_to', InputArgument::OPTIONAL, 'Override the configured asset root'),
            ));
        });
        $pimple['assetic.command.watch.definition'] = $pimple->factory(function (Container $c) {
            /** @var InputDefinition $definition */
            $definition = $c['assetic.command.dump.definition'];
            $definition->addOptions(array(
                new InputOption('force', null, InputOption::VALUE_NONE, 'Force an initial generation of all assets'),
                new InputOption('period', null, InputOption::VALUE_REQUIRED, 'Set the polling period in seconds', 1),
            ));

            return $definition;
        });

        /**
         * Helper functions for commands.
         */
        $pimple['assetic.helper.dump'] = $pimple->protect(function (AssetInterface $asset, OutputInterface $output) use ($pimple) {
            $combinations = VarUtils::getCombinations(
                $asset->getVars(),
                $pimple['assetic.variables']
            );

            foreach ($combinations as $combination) {
                $asset->setValues($combination);

                // resolve the target path
                $target = rtrim($pimple['assetic.write_to'], '/').'/'.$asset->getTargetPath();
                $target = VarUtils::resolve($target, $asset->getVars(), $asset->getValues());

                if (!is_dir($dir = dirname($target))) {
                    $output->writeln(sprintf(
                        '<comment>%s</comment> <info>[dir+]</info> %s',
                        date('H:i:s'),
                        $dir
                    ));

                    if (false === @mkdir($dir, 0777, true)) {
                        throw new \RuntimeException('Unable to create directory '.$dir);
                    }
                }

                $output->writeln(sprintf(
                    '<comment>%s</comment> <info>[file+]</info> %s',
                    date('H:i:s'),
                    $target
                ));

                if (OutputInterface::VERBOSITY_VERBOSE <= $output->getVerbosity()) {
                    if ($asset instanceof AssetCollectionInterface) {
                        /** @var AssetInterface $leaf */
                        foreach ($asset as $leaf) {
                            $root = $leaf->getSourceRoot();
                            $path = $leaf->getSourcePath();
                            $output->writeln(sprintf('        <comment>%s/%s</comment>', $root ?: '[unknown root]', $path ?: '[unknown path]'));
                        }
                    } else {
                        $root = $asset->getSourceRoot();
                        $path = $asset->getSourcePath();
                        $output->writeln(sprintf('        <comment>%s/%s</comment>', $root ?: '[unknown root]', $path ?: '[unknown path]'));
                    }
                }

                if (false === @file_put_contents($target, $asset->dump())) {
                    throw new \RuntimeException('Unable to write file '.$target);
                }
            }
        });
    }
}
