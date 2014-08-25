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

        $app['assetic.filter.compass'] = function ($app) {
            $compass = new CompassFilter($app['config']['assetic.filter.compass.bin']);
            $compass->addLoadPath($app['config']['assetic.read_from'] .'/sass');
            $compass->setNoLineComments(true);
            $compass->setStyle('nested');

            return $compass;
        };

        $app['assetic.filter.coffeescript'] = function ($app) {
            $coffee = new CoffeeScriptFilter($app['config']['assetic.filter.coffeescript.bin']);
            $coffee->setBare(true);

            return $coffee;
        };

        $app['assetic.filter.codekit.coffeescript'] = function ($app) {
            return new CodekitCoffeeScriptFilter($app['assetic.filter.coffeescript']);
        };

        $app['assetic.filter.codekit.coffeescript.drupal'] = function ($app) {
            return new CodekitCoffeeScriptFilter($app['assetic.filter.coffeescript'], '$, Drupal, window, document, undefined', 'jQuery, Drupal, this, this.document');
        };

        $app['assetic.filter.autoprefixer'] = function ($app) {
            return new AutoprefixerFilter($app['config']['assetic.filter.autoprefixer.bin'], $app['config']['assetic.filter.autoprefixer.browsers']);
        };

        $app['assetic.filter.pathfixer.css.loader'] = null;
        $app['assetic.filter.pathfixer.css.dumper'] = $app->protect(function (AssetInterface $asset) {
              $content = \Assetic\Util\CssUtils::filterReferences($asset->getContent(), function ($matches) {
                    if (strpos($matches['url'], '/') === 0) {
                        return str_replace($matches['url'], '..'. $matches['url'], $matches[0]);
                    } else {
                        return str_replace($matches['url'], $matches['url'], $matches[0]);
                    }
                });

              $asset->setContent($content);
          });
        $app['assetic.filter.pathfixer.css.extractor'] = null;
        $app['assetic.filter.pathfixer.css'] = function ($app) {
            return new CallablesFilter($app['assetic.filter.pathfixer.css.loader'], $app['assetic.filter.pathfixer.css.dumper'], $app['assetic.filter.pathfixer.css.extractor']);
        };

        $app['assetic.filter.strip.jquery'] = function ($app) {
            return new CallablesFilter(function (AssetInterface $asset) {
                $sourcePath = $asset->getSourcePath();
                if ('foot.coffee' == $sourcePath) {
                    $content = str_replace('# @codekit-prepend "vendor/jquery-1.10.2.min.js"', '', $asset->getContent());
                    $asset->setContent($content);
                }

                return $asset;
            });

        };

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
