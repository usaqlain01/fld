<?php

use Pimple\Container;
use Pimple\ServiceProviderInterface;
use Symfony\Component\Yaml;

class ConfigServiceProvider implements ServiceProviderInterface
{
    public function register(Container $pimple)
    {
        $pimple['config'] = function () use ($pimple) {
            if (!file_exists($pimple['config.path'])) {
                throw new \InvalidArgumentException(
                  $pimple['config.path'].' is not a valid path to the '
                  .'configuration'
                );
            }

            $fullpath = explode('.', $pimple['config.path']);

            switch (strtolower(end($fullpath))) {
                case 'php':
                    $result = include $pimple['config.path'];
                    break;
                case 'yml':
                    $parser = new Yaml\Parser();
                    $result = new \ArrayObject(
                      $parser->parse(file_get_contents($pimple['config.path']))
                    );
                    break;
                case 'xml':
                    $result = simplexml_load_file($pimple['config.path']);
                    break;
                case 'json':
                    $result = json_decode(file_get_contents($pimple['config.path']));

                    if (null == $result) {
                        throw new \InvalidArgumentException(
                          'Unable to decode the configuration file: '.$pimple['config.path']
                        );
                    }
                    break;
                default:
                    throw new \InvalidArgumentException(
                      'Unable to load configuration; the provided file extension was not recognized. '
                      .'Only yml, xml or json allowed'
                    );
                    break;
            }

            return $result;
        };
    }
}
