<?php

require 'vendor/autoload.php';

\Symfony\Component\Debug\Debug::enable();

use Assetic\Asset\AssetCollection;
use Assetic\Asset\FileAsset;
use Assetic\Asset\GlobAsset;

$source_dir = __DIR__ .'/build/fieldmuseum-website/patternlab/source';
$target_dir = __DIR__ .'/docroot/profiles/fieldmuseum/themes/esquif';

$am = new \Assetic\AssetManager();

$compass = new \Assetic\Filter\CompassFilter('/Users/bjd/.rvm/gems/ruby-1.9.3-p545/bin/compass');
$compass->addLoadPath($source_dir .'/sass');
$compass->setNoLineComments(true);
$compass->setStyle('nested');

$coffee = new \Assetic\Filter\CoffeeScriptFilter('/usr/local/bin/coffee');
$coffee->setBare(true);

$finder = \Symfony\Component\Finder\Finder::create()->files()->depth(0)->name('*.coffee')->in($source_dir .'/js/build');

/** @var \Symfony\Component\Finder\SplFileInfo $file  */
foreach ($finder as $file) {
    $asset = new FileAsset($file->getPathname(), array(
        new \Bangpound\Assetic\Filter\CodekitCoffeeScriptFilter($coffee),
        $coffee,
    ));
    $asset->setTargetPath('/js/'. $file->getBasename('.coffee'). '.js');
    $am->set(str_replace(array('.', '-'), '_', $file->getBasename()), $asset);
}

$finder = \Symfony\Component\Finder\Finder::create()->files()->depth(0)->name('*.scss')->in($source_dir .'/sass');

/** @var \Symfony\Component\Finder\SplFileInfo $file  */
foreach ($finder as $file) {
    $asset = new FileAsset($file->getPathname(), array(
        $compass,
        new \ZaCoZa\Assetic\Filter\AutoprefixerFilter('/usr/local/bin/autoprefixer', array('> 1%', 'last 3 versions', 'ff >= 17', 'opera >= 12.1', 'ie >= 8', 'Android >= 3'))
    ));
    $asset->setTargetPath('/css/'. $file->getBasename('.scss'). '.css');
    $am->set(str_replace(array('.', '-'), '_', $file->getBasename()), $asset);
}

$writer = new \Assetic\AssetWriter($target_dir);
$writer->writeManagerAssets($am);
