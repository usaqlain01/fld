<?php

// autoload_psr4.php @generated by Composer

$vendorDir = dirname(dirname(__FILE__));
$baseDir = dirname(dirname(dirname($vendorDir))).'/docroot/profiles/fieldmuseum';

return array(
    'cweagans\\Composer\\' => array($vendorDir . '/cweagans/composer-patches/src'),
    'Wikimedia\\Composer\\' => array($vendorDir . '/wikimedia/composer-merge-plugin/src'),
    'Symfony\\Component\\Yaml\\' => array($vendorDir . '/symfony/yaml'),
    'Symfony\\Component\\PropertyAccess\\' => array($vendorDir . '/symfony/property-access'),
    'Symfony\\Component\\Filesystem\\' => array($vendorDir . '/symfony/filesystem'),
    'Drupal\\inline\\' => array($baseDir . '/modules/contrib/inline/lib/Drupal/inline'),
    'Composer\\Installers\\' => array($vendorDir . '/composer/installers/src/Composer/Installers'),
    'Bangpound\\stojg\\crop\\' => array($vendorDir . '/bangpound/crop-extension/src'),
    '' => array($baseDir . '/lib'),
);
