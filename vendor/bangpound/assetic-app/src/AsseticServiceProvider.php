<?php

use Assetic\Asset\AssetInterface;
use Assetic\AssetManager;
use Assetic\Filter\CallablesFilter;
use Assetic\Filter\CoffeeScriptFilter;
use Assetic\Filter\CompassFilter;
use Bangpound\Assetic\Filter\CodekitCoffeeScriptFilter;
use Pimple\Container;
use Pimple\ServiceProviderInterface;
use ZaCoZa\Assetic\Filter\AutoprefixerFilter;

class AsseticServiceProvider implements ServiceProviderInterface
{
    public function register(Container $app)
    {
        $app['assetic.asset_manager'] = function ($app) {
            return new AssetManager();
        };

        // Assetic filter service integrating Compass command line tool.
        $app['assetic.filter.compass'] = function ($app) {
            $compass = new CompassFilter($app['config']['assetic.filter.compass.bin']);
            $compass->addLoadPath($app['config']['assetic.read_from'] .'/sass');
            $compass->setNoLineComments(true);
            $compass->setStyle('nested');

            return $compass;
        };

        // Assetic filter service integrating CoffeeScript compiler.
        $app['assetic.filter.coffeescript'] = function ($app) {
            $coffee = new CoffeeScriptFilter($app['config']['assetic.filter.coffeescript.bin']);
            $coffee->setBare(true);

            return $coffee;
        };

        // Assetic filter service to support codekit coffescript extensions.
        $app['assetic.filter.codekit.coffeescript'] = function ($app) {
            return new CodekitCoffeeScriptFilter($app['assetic.filter.coffeescript']);
        };

        // Assetic filter service to support codekit coffescript extensions with Drupal-specific
        // closure arguments.
        $app['assetic.filter.codekit.coffeescript.drupal'] = function ($app) {
            return new CodekitCoffeeScriptFilter($app['assetic.filter.coffeescript'], '$, Drupal, window, document, undefined', 'jQuery, Drupal, this, this.document');
        };

        // Assetic filter service to support autoprefixer tool.
        $app['assetic.filter.autoprefixer'] = function ($app) {
            return new AutoprefixerFilter($app['config']['assetic.filter.autoprefixer.bin'], $app['config']['assetic.filter.autoprefixer.browsers']);
        };

        // Assetic filter service that rewrites absolute paths to be relative.
        $app['assetic.filter.pathfixer.css.loader'] = null;
        $app['assetic.filter.pathfixer.css.dumper.callback'] = $app->protect(function ($matches) {
            if (isset($matches['url']) && strpos($matches['url'], DIRECTORY_SEPARATOR) === 0) {
                return str_replace($matches['url'], '..'. $matches['url'], $matches[0]);
            } else {
                return $matches[0];
            }
        });
        $app['assetic.filter.pathfixer.css.dumper'] = $app->protect(function (AssetInterface $asset) use ($app) {
              $content = \Assetic\Util\CssUtils::filterReferences($asset->getContent(), $app['assetic.filter.pathfixer.css.dumper.callback']);

              $asset->setContent($content);
          });
        $app['assetic.filter.pathfixer.css.extractor'] = null;
        $app['assetic.filter.pathfixer.css'] = function ($app) {
            return new CallablesFilter($app['assetic.filter.pathfixer.css.loader'], $app['assetic.filter.pathfixer.css.dumper'], $app['assetic.filter.pathfixer.css.extractor']);
        };

        // Assetic filter service that removes jQuery from the build as it is already
        // being added by Drupal.
        $app['assetic.filter.strip.jquery'] = function ($app) {
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
        $app['assetic.filter.pathfixer.js.loader'] = null;
        $app['assetic.filter.pathfixer.js.dumper'] = $app->protect(function (AssetInterface $asset) {
              $content = str_replace('/images/icons/sprite.svg', '/profiles/fieldmuseum/themes/esquif/images/icons/sprite.svg', $asset->getContent());
              $asset->setContent($content);
          });
        $app['assetic.filter.pathfixer.js.extractor'] = null;
        $app['assetic.filter.pathfixer.js'] = function ($app) {
            return new CallablesFilter($app['assetic.filter.pathfixer.js.loader'], $app['assetic.filter.pathfixer.js.dumper'], $app['assetic.filter.pathfixer.js.extractor']);
        };
    }
}
