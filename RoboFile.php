<?php

use Robo\Tasks;

/**
 * This is project's console commands configuration for Robo task runner.
 *
 * @see http://robo.li/
 */
class RoboFile extends Tasks
{
  /** @var \Pimple\Container  */
  private $pimple;

  public function __construct()
  {
    define('FLDMUSE_ROOT', getcwd());

    require_once FLDMUSE_ROOT.'/vendor/autoload.php';

    $c = new Pimple\Container(array(
      'debug' => true,
    ));
    $c->register(new \Bangpound\Pimple\Provider\AsseticServiceProvider(), array(
      'assetic.read_from' => FLDMUSE_ROOT .'/build/fieldmuseum-website/patternlab/source',
      'assetic.write_to' => FLDMUSE_ROOT .'/docroot/profiles/fieldmuseum/themes/esquif',
      'assetic.filter.postcss.bin' => \Bangpound\Assetic\find_executable('autoprefixer', '/usr/local/bin/postcss'),
      'assetic.filter.coffeescript.bin' => \Bangpound\Assetic\find_executable('coffee', '/usr/local/bin/coffee'),
      'assetic.filter.autoprefixer.browsers' => array(
        '> 1%',
        'last 3 versions',
        'ff >= 17',
        'opera >= 12.1',
        'ie >= 8',
        'Android >= 3'
      ),
    ));
    $c->register(new \Bangpound\Pimple\Provider\Filter\CompassFilterServiceProvider(), array(
      'assetic.filter.compass.bin'              => Bangpound\Assetic\find_executable('compass', '/usr/bin/compass'),
      'assetic.filter.compass.no_line_comments' => true,
      'assetic.filter.compass.style'            => 'nested'
    ));
    $c->register(new ProjectAsseticServiceProvider());

    $c['assetic.prepare.command'] = function (\Pimple\Container $c) {
      return new PrepareCommand($c);
    };
    $c['assetic.writer'] = function ($app) {
      return new \Assetic\AssetWriter($app['assetic.write_to']);
    };

    $this->pimple = $c;
  }

  public function prepare() {
    $this->taskSymfonyCommand($this->pimple['assetic.prepare.command'])->run();
  }

  public function dump() {
    $this->taskSymfonyCommand($this->pimple['assetic.dump.command'])->run();
  }
}