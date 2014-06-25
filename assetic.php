<?php

require 'vendor/autoload.php';

\Symfony\Component\Debug\Debug::enable();

use Assetic\Asset\AssetCollection;
use Assetic\Asset\FileAsset;
use Assetic\Asset\GlobAsset;

class CodekitFilter implements \Assetic\Filter\FilterInterface, \Assetic\Filter\DependencyExtractorInterface {

    private $includes;

    public function __construct(\Assetic\Filter\CoffeeScriptFilter $coffee) {
        $this->coffee = $coffee;
    }

    /**
     * Filters an asset after it has been loaded.
     *
     * @param \Assetic\Asset\AssetInterface $asset An asset
     */
    public function filterLoad(\Assetic\Asset\AssetInterface $asset)
    {
        $sourceRoot = $asset->getSourceRoot();
        $sourcePath = $asset->getSourcePath();
        $pattern = '/# @codekit-([a-z]+) "(.+?)"/';
        $matches = array();
        preg_match_all($pattern, $asset->getContent(), $matches);

        foreach (array_keys($matches[0]) as $key) {
            $importPath = $matches[2][$key];
            $importRoot = $sourceRoot;
            $importSource = $importRoot.'/'.$importPath;
            $filters = array();
            if (strrpos($importPath, '.coffee', -7)) {
                $filters[] = $this->coffee;
            }
            $include = new FileAsset($importSource, $filters, $importRoot, $importPath);

            $this->includes[$sourceRoot .'/'. $sourcePath][$matches[1][$key]][] = $include;
        }
    }

    /**
     * Filters an asset just before it's dumped.
     *
     * @param \Assetic\Asset\AssetInterface $asset An asset
     */
    public function filterDump(\Assetic\Asset\AssetInterface $asset)
    {
        $sourceRoot = $asset->getSourceRoot();
        $sourcePath = $asset->getSourcePath();
        if ($this->includes[$sourceRoot .'/'. $sourcePath]) {
            $content = '(function ($, Drupal, window, document, undefined) {' . PHP_EOL;
            if (isset($this->includes[$sourceRoot .'/'. $sourcePath]['prepend'])) {
                /** @var \Assetic\Asset\AssetInterface $include_asset */
                foreach ($this->includes[$sourceRoot .'/'. $sourcePath]['prepend'] as $include_asset) {
                    $filename = basename($include_asset->getSourcePath());
                    $prefix = <<<EOT
  /*
  --------------------------------------------
       Begin $filename
  --------------------------------------------
   */
EOT;

                    $content .= $prefix . PHP_EOL . $include_asset->dump() . PHP_EOL;
                }
            }
            $content .= $asset->getContent();
            if (isset($this->includes[$sourceRoot .'/'. $sourcePath]['append'])) {
                foreach ($this->includes[$sourceRoot .'/'. $sourcePath]['append'] as $include_asset) {
                    $content .= $prefix . PHP_EOL . $include_asset->dump() . PHP_EOL;
                }
            }
            $content .= PHP_EOL . '})(jQuery, Drupal, this, this.document);';
            $asset->setContent($content);
        }
    }

    /**
     * Returns child assets.
     *
     * @param \Assetic\Factory\AssetFactory $factory The asset factory
     * @param string $content The asset content
     * @param string $loadPath An optional load path
     *
     * @return \Assetic\Asset\AssetInterface[] Child assets
     */
    public function getChildren(\Assetic\Factory\AssetFactory $factory, $content, $loadPath = null)
    {
        return array();
        // TODO: Implement getChildren() method.
    }
}

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
        new \CodekitFilter($coffee),
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
