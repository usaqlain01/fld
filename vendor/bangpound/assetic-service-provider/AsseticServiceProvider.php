<?php

namespace Bangpound\Pimple\Provider;

use Assetic\AssetManager;
use Assetic\AssetWriter;
use Assetic\Factory\AssetFactory;
use Assetic\Factory\LazyAssetManager;
use Assetic\FilterManager;
use Bangpound\Assetic\Command\DumpCommand;
use Bangpound\Assetic\Command\WatchCommand;
use Pimple\Container;
use Pimple\ServiceProviderInterface;
use Symfony\Component\Console\Command\Command;

class AsseticServiceProvider implements ServiceProviderInterface
{
    const ASSET_MANAGER_MATCH = '/^[a-z0-9_.]+?\.asset_manager$/';

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
        /*
         * Default configuration.
         */
        $pimple['assetic.debug'] = false;
        $pimple['assetic.assets'] = array();
        $pimple['assetic.variables'] = array();

        $pimple['assetic.register_functions'] = true;

        $pimple['assetic.java.bin'] = \Bangpound\Assetic\find_executable('java', '/usr/bin/java');
        $pimple['assetic.node.bin'] = \Bangpound\Assetic\find_executable('node', '/usr/bin/node');
        $pimple['assetic.node.paths'] = array();
        $pimple['assetic.ruby.bin'] = \Bangpound\Assetic\find_executable('ruby', '/usr/bin/ruby');
        $pimple['assetic.sass.bin'] = \Bangpound\Assetic\find_executable('sass', '/usr/bin/sass');

        /*
         * Finds IDs of all Asset Manager services.
         */
        $pimple['assetic.asset_managers'] = $pimple->factory(function (Container $c) {
            $ids = preg_grep(self::ASSET_MANAGER_MATCH, $c->keys());

            return $ids;
        });

        /*
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

        /*
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

            // Optionally enable the global asset functions.
            if ($c['assetic.register_functions']) {
                assetic_init($factory);
            }

            return $factory;
        };

        /*
         * Asset writer, writes to the 'assetic.write_to' folder
         *
         * @param Container $c
         * @return AssetWriter
         */
        $pimple['assetic.asset_writer'] = function (Container $c) {
            return new AssetWriter($c['assetic.write_to']);
        };

        /*
         * Asset manager
         *
         * @return AssetManager
         */
        $pimple['assetic.asset_manager'] = function () {
            return new AssetManager();
        };

        /*
         * Filter manager
         *
         * @return FilterManager
         */
        $pimple['assetic.filter_manager'] = function () {
            return new FilterManager();
        };

        /*
         * Lazy asset manager for loading assets from $pimple['assetic.assets']
         *
         * @param Container $c
         * @return \Assetic\Factory\LazyAssetManager
         */
        $pimple['assetic.lazy.asset_manager'] = function (Container $c) {
            $lazy     = new LazyAssetManager($c['assetic.factory']);

            foreach ($c['assetic.assets'] as $name => $formula) {
                $lazy->setFormula($name, $formula);
            }

            return $lazy;
        };

        /*
         * Console commands.
         */

        /*
         * Dumps all assets.
         *
         * @param Container $c
         * @return \Symfony\Component\Console\Command\Command
         */
        $pimple['assetic.dump.command'] = function (Container $c) {
            return new DumpCommand($c['assetic.asset_manager'], $c['assetic.asset_writer'], $c['assetic.write_to'], $c['assetic.variables'], $c['debug']);
        };

        /*
         * @param Container $c
         * @return Command
         */
        $pimple['assetic.watch.command'] = function (Container $c) {
            return new WatchCommand($c['assetic.asset_manager'], $c['assetic.asset_writer'], $c['assetic.write_to'], $c['assetic.variables'], $c['debug']);
        };
    }
}
