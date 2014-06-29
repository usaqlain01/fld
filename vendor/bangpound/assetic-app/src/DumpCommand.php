<?php

use Symfony\Component\Console\Input\InputArgument;
use Symfony\Component\Console\Input\InputInterface;
use Symfony\Component\Console\Output\OutputInterface;

/**
 * Dumps assets to the filesystem.
 *
 * @author Kris Wallsmith <kris@symfony.com>
 */
class DumpCommand extends ContainerAwareCommand
{
    private $am;
    private $readFrom;
    private $writeTo;

    protected function configure()
    {
        $this
            ->setName('assetic:dump')
            ->setDescription('Dumps all assets to the filesystem')
            ->addArgument('read_from', InputArgument::OPTIONAL, 'Override the configured asset root')
            ->addArgument('write_to', InputArgument::OPTIONAL, 'Override the configured asset root')
        ;
    }

    protected function initialize(InputInterface $input, OutputInterface $stdout)
    {
        $app = $this->getContainer();

        $this->am = $app['assetic.asset_manager'];

        $this->readFrom = $app['config']['assetic.read_from'];
        if ($input->hasArgument('read_from') && $readFrom = $input->getArgument('read_from')) {
            $this->readFrom = $readFrom;
        }

        $this->writeTo = $app['config']['assetic.write_to'];
        if ($input->hasArgument('write_to') && $writeTo = $input->getArgument('write_to')) {
            $this->writeTo = $writeTo;
        }
    }

    protected function execute(InputInterface $input, OutputInterface $output)
    {
        $app = $this->getContainer();

        $finder = \Symfony\Component\Finder\Finder::create()->files()->depth(0)->name('*.coffee')->in($this->readFrom .'/js/build');

        $output->write('JS assets ');
        /** @var \Symfony\Component\Finder\SplFileInfo $file  */
        foreach ($finder as $file) {
            $asset = new \Assetic\Asset\FileAsset($file->getPathname(), array(
              $app['assetic.filter.codekit.coffeescript'],
              $app['assetic.filter.coffeescript'],
            ));
            $asset->setTargetPath('/js/'. $file->getBasename('.coffee'). '.js');
            $output->write('<Info>js/'. $file->getBasename('.coffee'). '.js</Info> ');
            $app['assetic.asset_manager']->set(str_replace(array('.', '-'), '_', $file->getBasename()), $asset);
        }
        $output->write(PHP_EOL);

        $finder = \Symfony\Component\Finder\Finder::create()->files()->depth(0)->name('*.scss')->in($this->readFrom .'/sass');

        $output->write('CSS assets ');
        /** @var \Symfony\Component\Finder\SplFileInfo $file  */
        foreach ($finder as $file) {
            $asset = new \Assetic\Asset\FileAsset($file->getPathname(), array(
              $app['assetic.filter.compass'],
              $app['assetic.filter.autoprefixer'],
            ));
            $asset->setTargetPath('/css/'. $file->getBasename('.scss'). '.css');
            $output->write('<Info>css/'. $file->getBasename('.scss'). '.css</Info> ');
            $app['assetic.asset_manager']->set(str_replace(array('.', '-'), '_', $file->getBasename()), $asset);
        }
        $output->write(PHP_EOL);

        $writer = new \Assetic\AssetWriter($this->writeTo);
        $writer->writeManagerAssets($app['assetic.asset_manager']);
    }
}
