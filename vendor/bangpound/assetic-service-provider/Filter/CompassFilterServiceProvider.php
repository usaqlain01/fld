<?php

namespace Bangpound\Pimple\Provider\Filter;

use Assetic\FilterManager;
use Pimple\Container;
use Pimple\ServiceProviderInterface;

class CompassFilterServiceProvider implements ServiceProviderInterface
{
    /**
     * Registers services on the given container.
     *
     * This method should only be used to configure services and parameters.
     * It should not get services.
     *
     * @param Container $pimple An Container instance
     */
    public function register(Container $pimple)
    {
        $pimple['assetic.filter.compass.class'] = 'Assetic\Filter\CompassFilter';
        $pimple['assetic.filter.compass.bin'] = '/usr/bin/compass';
        $pimple['assetic.filter.compass.timeout'] = null;
        $pimple['assetic.filter.compass.debug'] = false;
        $pimple['assetic.filter.compass.no_line_comments'] = false;
        $pimple['assetic.filter.compass.style'] = null;
        $pimple['assetic.filter.compass.images_dir'] = null;
        $pimple['assetic.filter.compass.fonts_dir'] = null;
        $pimple['assetic.filter.compass.javascripts_dir'] = null;
        $pimple['assetic.filter.compass.http_path'] = null;
        $pimple['assetic.filter.compass.http_images_path'] = null;
        $pimple['assetic.filter.compass.http_fonts_path'] = null;
        $pimple['assetic.filter.compass.http_generated_images_path'] = null;
        $pimple['assetic.filter.compass.generated_images_path'] = null;
        $pimple['assetic.filter.compass.http_javascripts_path'] = null;
        $pimple['assetic.filter.compass.plugins'] = array();
        $pimple['assetic.filter.compass.load_paths'] = array();
        $pimple['assetic.filter.compass.home_env'] = true;

        $pimple['assetic.filter.compass'] = function (Container $c) {
            /** @var \Assetic\Filter\CompassFilter $filter */
            $filter = new $c['assetic.filter.compass.class']($c['assetic.filter.compass.bin'], $c['assetic.ruby.bin']);
            $filter->setTimeout($c['assetic.filter.compass.timeout']);
            $filter->setDebugInfo($c['assetic.filter.compass.debug']);
            $filter->setNoLineComments($c['assetic.filter.compass.no_line_comments']);
            $filter->setStyle($c['assetic.filter.compass.style']);
            $filter->setImagesDir($c['assetic.filter.compass.images_dir']);
            $filter->setFontsDir($c['assetic.filter.compass.fonts_dir']);
            $filter->setJavascriptsDir($c['assetic.filter.compass.javascripts_dir']);
            $filter->setHttpPath($c['assetic.filter.compass.http_path']);
            $filter->setHttpImagesPath($c['assetic.filter.compass.http_images_path']);
            $filter->setHttpFontsPath($c['assetic.filter.compass.http_fonts_path']);
            $filter->setHttpGeneratedImagesPath($c['assetic.filter.compass.http_generated_images_path']);
            $filter->setGeneratedImagesPath($c['assetic.filter.compass.generated_images_path']);
            $filter->setHttpJavascriptsPath($c['assetic.filter.compass.http_javascripts_path']);
            $filter->setPlugins($c['assetic.filter.compass.plugins']);
            $filter->setLoadPaths($c['assetic.filter.compass.load_paths']);
            $filter->setHomeEnv($c['assetic.filter.compass.home_env']);

            return $filter;
        };
        $pimple->extend('assetic.filter_manager', function (FilterManager $manager, Container $c) {
            $manager->set('compass', $c['assetic.filter.compass']);

            return $manager;
        });
    }
}
