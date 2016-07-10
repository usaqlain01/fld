<?php

use Assetic\AssetWriter;
use Bangpound\Pimple\Provider\AsseticServiceProvider;
use Bangpound\Pimple\Provider\Filter\CompassFilterServiceProvider;
use Pimple\Container;
use Robo\Tasks;
use Symfony\Component\Process\ExecutableFinder;

/**
 * This is project's console commands configuration for Robo task runner.
 *
 * @see http://robo.li/
 */
class RoboFile extends Tasks
{
  /** @var Container  */
  private $pimple;

  public function __construct()
  {
    define('FLDMUSE_ROOT', getcwd());

    require_once FLDMUSE_ROOT.'/vendor/autoload.php';

    $c = new Container(array(
      'debug' => true,
    ));
    $c->register(new AsseticServiceProvider(), array(
      'assetic.read_from' => FLDMUSE_ROOT .'/build/fieldmuseum-website/patternlab/source',
      'assetic.write_to' => FLDMUSE_ROOT .'/docroot/profiles/fieldmuseum/themes/esquif',
      'assetic.filter.postcss.bin' => self::find_executable('postcss', '/usr/local/bin/postcss'),
      'assetic.filter.coffeescript.bin' => self::find_executable('coffee', '/usr/local/bin/coffee'),
      'assetic.filter.autoprefixer.browsers' => array(
        '> 1%',
        'last 3 versions',
        'ff >= 17',
        'opera >= 12.1',
        'ie >= 8',
        'Android >= 3'
      ),
    ));
    $c->register(new CompassFilterServiceProvider(), array(
      'assetic.filter.compass.bin'              => self::find_executable('compass', '/usr/bin/compass'),
      'assetic.filter.compass.no_line_comments' => true,
      'assetic.filter.compass.style'            => 'nested'
    ));
    $c->register(new ProjectAsseticServiceProvider());

    $this->pimple = $c;
  }

  public function prepare() {
    $repoDir = 'build/fieldmuseum-website';
    $themeDir = 'docroot/profiles/fieldmuseum/themes/esquif';

    $this->taskMirrorDir([$repoDir.'/patternlab/source/bower_components' => $themeDir.'/bower_components'])->run();
    $this->say('Copied bower');

    $this->taskFilesystemStack()->mirror($repoDir.'/patternlab/source/images', $themeDir.'/images', null, array(
      'override' => true,
    ))->run();
    $this->say('Copied images');

    $this->taskMirrorDir([$repoDir.'/patternlab/source/fonts' => $themeDir.'/fonts'])->run();
    $this->say('Copied fonts');
  }

  public function dump() {
    $aw = new AssetWriter($this->pimple['assetic.write_to']);
    /** @var \Assetic\AssetManager $am */
    $am = $this->pimple['assetic.asset_manager'];
    foreach ($am->getNames() as $name) {
      $this->say(sprintf('writing %s', $name));
      $aw->writeAsset($am->get($name));
    }
  }

  protected static function find_executable($name, $default) {
    $finder = new ExecutableFinder();
    return $finder->find($name, $default);
  }
}