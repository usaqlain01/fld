<?php

use Symfony\Component\Console\Command\Command;
use Symfony\Component\Console\Input\InputArgument;
use Symfony\Component\Console\Input\InputInterface;
use Symfony\Component\Console\Output\OutputInterface;

class PrepareCommand extends Command
{
    private $app;

    /**
     * @var \Assetic\AssetManager
     */
    protected $am;
    protected $basePath;

    public function __construct(\Pimple\Container $app)
    {
        $this->app = $app;
        parent::__construct();
    }

    protected function configure()
    {
        $this
          ->setName('prepare')
          ->addArgument('write_to', InputArgument::OPTIONAL, 'Override the configured asset root')
        ;
    }

    protected function initialize(InputInterface $input, OutputInterface $stdout)
    {
        $this->basePath = $this->app['assetic.write_to'];
        if ($input->hasArgument('write_to') && $basePath = $input->getArgument('write_to')) {
            $this->basePath = $basePath;
        }
    }

    protected function execute(InputInterface $input, OutputInterface $stdout)
    {
        $repoDir = 'build/fieldmuseum-website';
        $themeDir = 'docroot/profiles/fieldmuseum/themes/esquif';

        $filesystem = new \Symfony\Component\Filesystem\Filesystem();

        $filesystem->mirror($repoDir.'/patternlab/source/bower_components', $themeDir.'/bower_components', null, array(
          'override' => true,
          'delete' => true,
        ));
        $stdout->writeln('Copied bower');

        $filesystem->mirror($repoDir.'/patternlab/source/images', $themeDir.'/images', null, array(
          'override' => true,
        ));
        $stdout->writeln('Copied images');

        $filesystem->mirror($repoDir.'/patternlab/source/fonts', $themeDir.'/fonts', null, array(
          'override' => true,
          'delete' => true,
        ));
        $stdout->writeln('Copied fonts');
    }
}
