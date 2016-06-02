Assetic Service Provider
========================

Provides [Assetic][kriswallsmith/assetic] as a service to [Pimple][pimple] applications.

Requirements
------------

 * PHP 5.3+
 * Pimple ~2.1

Installation
------------

Through [Composer][composer] as [bangpound/assetic-service-provider][bangpound/assetic-service-provider].

Usage
-----

### Pimple

```php
<?php
use Bangpound\Pimple\Provider\AsseticServiceProvider;

$c = new Pimple\Container;

$c->register(new AsseticServiceProvider(), array(
    'assetic.debug' => TRUE,
    'assetic.read_from' => __DIR__ .'/../assets',
));
```

### Cilex

```php
<?php
use Cilex\Provider\Console\ConsoleServiceProvider;
use Symfony\Component\Console\Input\ArgvInput;

$c->register(new ConsoleServiceProvider());

$c['console']->add($app['assetic.command.dump']);
$c['console']->add($app['assetic.command.watch']);
$c['console']->run(new ArgvInput());
```

Configuration
-------------

### Parameters

 * **assetic.debug**:
   Filters prefixed with a "?" will be omitted in debug mode.
 * **assetic.read_from**:
   The default root directory.
 * **assetic.write_to**:
   Override the configured asset root.

### Services

 * **assetic.asset_manager**:
   Asset Manager, instance `Assetic\Factory\LazyAssetManager`.
 * **assetic.filter_manager**:
   Filter Manager, instance `Assetic\FilterManager`.
 * **assetic.asset_factory**:
   Asset Factory, instance `Assetic\Factory\AssetFactory`.


License
-------

MIT, see LICENSE.

[kriswallsmith/assetic]: https://github.com/kriswallsmith/assetic
[pimple]: http://pimple.sensiolabs.org
[composer]: http://getcomposer.org
[bangpound/assetic-service-provider]: https://packagist.org/packages/bangpound/assetic-service-provider
