<?php

use Assetic\AssetManager;
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

        $app['assetic.filter.autoprefixer'] = function ($app) {
            return new AutoprefixerFilter($app['config']['assetic.filter.autoprefixer.bin'], $app['config']['assetic.filter.autoprefixer.browsers']);
        };
    }
}
