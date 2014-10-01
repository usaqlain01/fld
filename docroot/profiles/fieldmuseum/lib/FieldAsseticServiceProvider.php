<?php

use Assetic\Asset\AssetInterface;
use Assetic\AssetManager;
use Assetic\Filter\CallablesFilter;
use Assetic\Filter\CoffeeScriptFilter;
use Assetic\Util\CssUtils;
use Bangpound\Assetic\Filter\CodekitCoffeeScriptFilter;
use Pimple\Container;
use Pimple\ServiceProviderInterface;
use ZaCoZa\Assetic\Filter\AutoprefixerFilter;

class FieldAsseticServiceProvider implements ServiceProviderInterface
{
    public function register(Container $pimple)
    {
        // Assetic filter service integrating CoffeeScript compiler.
        $pimple['assetic.filter.coffeescript'] = function ($c) {
            $coffee = new CoffeeScriptFilter($c['assetic.filter.coffeescript.bin']);
            $coffee->setBare(true);

            return $coffee;
        };

        // Assetic filter service to support codekit coffescript extensions.
        $pimple['assetic.filter.codekit.coffeescript'] = function ($c) {
            return new CodekitCoffeeScriptFilter($c['assetic.filter.coffeescript']);
        };

        // Assetic filter service to support codekit coffescript extensions with Drupal-specific
        // closure arguments.
        $pimple['assetic.filter.codekit.coffeescript.drupal'] = function ($c) {
            return new CodekitCoffeeScriptFilter($c['assetic.filter.coffeescript'], '$, Drupal, window, document, undefined', 'jQuery, Drupal, this, this.document');
        };

        // Assetic filter service to support autoprefixer tool.
        $pimple['assetic.filter.autoprefixer'] = function ($c) {
            return new AutoprefixerFilter($c['assetic.filter.autoprefixer.bin'], $c['assetic.filter.autoprefixer.browsers']);
        };

        // Assetic filter service that rewrites absolute paths to be relative.
        $pimple['assetic.filter.pathfixer.css.loader'] = null;
        $pimple['assetic.filter.pathfixer.css.dumper.callback'] = $pimple->protect(function ($matches) {
            if (isset($matches['url']) && strpos($matches['url'], DIRECTORY_SEPARATOR) === 0) {
                return str_replace($matches['url'], '..'.$matches['url'], $matches[0]);
            } else {
                return $matches[0];
            }
        });
        $pimple['assetic.filter.pathfixer.css.dumper'] = $pimple->protect(function (AssetInterface $asset) use ($pimple) {
              $content = CssUtils::filterReferences($asset->getContent(), $pimple['assetic.filter.pathfixer.css.dumper.callback']);

              $asset->setContent($content);
          });
        $pimple['assetic.filter.pathfixer.css.extractor'] = null;
        $pimple['assetic.filter.pathfixer.css'] = function ($c) {
            return new CallablesFilter($c['assetic.filter.pathfixer.css.loader'], $c['assetic.filter.pathfixer.css.dumper'], $c['assetic.filter.pathfixer.css.extractor']);
        };

        // Assetic filter service that removes jQuery from the build as it is already
        // being added by Drupal.
        $pimple['assetic.filter.strip.jquery'] = function () {
            return new CallablesFilter(function (AssetInterface $asset) {
                $sourcePath = $asset->getSourcePath();
                if ('foot.coffee' == $sourcePath) {
                    $content = str_replace('# @codekit-prepend "vendor/jquery-1.10.2.min.js"', '', $asset->getContent());
                    $asset->setContent($content);
                }
            });

        };

        // Assetic filter service that replaces the SVG file path in JS file with
        // path prefixed with Drupal profile.
        $pimple['assetic.filter.pathfixer.js.loader'] = null;
        $pimple['assetic.filter.pathfixer.js.dumper'] = $pimple->protect(function (AssetInterface $asset) {
              $content = str_replace('/images/icons/sprite.svg', '/profiles/fieldmuseum/themes/esquif/images/icons/sprite.svg', $asset->getContent());
              $asset->setContent($content);
          });
        $pimple['assetic.filter.pathfixer.js.extractor'] = null;
        $pimple['assetic.filter.pathfixer.js'] = function ($c) {
            return new CallablesFilter($c['assetic.filter.pathfixer.js.loader'], $c['assetic.filter.pathfixer.js.dumper'], $c['assetic.filter.pathfixer.js.extractor']);
        };

        // Adds Coffeescript files to asset manager.
        $pimple->extend('assetic.asset_manager', function (AssetManager $am, $c) {
            $finder = \Symfony\Component\Finder\Finder::create()->files()->depth(0)->name('*.coffee')->in($c['assetic.read_from'].'/js/build');

            /** @var \Symfony\Component\Finder\SplFileInfo $file */
            foreach ($finder as $file) {
                $asset = new \Assetic\Asset\FileAsset($file->getPathname(), array(
                    $c['assetic.filter.strip.jquery'],
                    $file->getFilename() == 'head.coffee' ? $c['assetic.filter.codekit.coffeescript'] : $c['assetic.filter.codekit.coffeescript.drupal'],
                    $c['assetic.filter.coffeescript'],
                    $c['assetic.filter.pathfixer.js'],
                ));
                $asset->setTargetPath('js/'.$file->getBasename('.coffee').'.js');
                $am->set(str_replace(array('.', '-'), '_', $file->getBasename()), $asset);
            }

            return $am;
        });

        // Adds SCSS files to asset manager.
        $pimple->extend('assetic.asset_manager', function (AssetManager $am, $c) {
            $finder = \Symfony\Component\Finder\Finder::create()->files()->depth(0)->name('*.scss')->in($c['assetic.read_from'].'/sass');

            /** @var \Symfony\Component\Finder\SplFileInfo $file  */
            foreach ($finder as $file) {
                $asset = new \Assetic\Asset\FileAsset($file->getPathname(), array(
                    $c['assetic.filter.compass'],
                    $c['assetic.filter.autoprefixer'],
                    $c['assetic.filter.pathfixer.css'],
                ));
                $asset->setTargetPath('css/'.$file->getBasename('.scss').'.css');
                $am->set(str_replace(array('.', '-'), '_', $file->getBasename()), $asset);
            }

            return $am;
        });
    }
}
