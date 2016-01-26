<?php

namespace Drufony\Bridge\Autoload;

use Symfony\Component\Finder\Finder;
use Composer\IO\IOInterface;

/**
 * Class ClassMapGenerator.
 *
 * @see Composer\Autoload\ClassMapGenerator
 */
class ClassMapGenerator
{
    /**
     * File extensions to scan for PHP classes, intefaces and traits.
     *
     * @var array
     */
    private static $extensions = array('php', 'inc', 'hh', 'module', 'theme', 'profile');

    /**
     * Generate a class map file.
     *
     * @param \Traversable $dirs Directories or a single path to search in
     * @param string       $file The name of the class map file
     */
    public static function dump($dirs, $file)
    {
        $maps = array();

        foreach ($dirs as $dir) {
            $maps = array_merge($maps, static::createMap($dir));
        }

        if (!empty($maps)) {
            file_put_contents($file, sprintf('<?php return %s;', var_export($maps, true)));
        } elseif (file_exists($file)) {
            unlink($file);
        }
    }

    /**
     * Iterate over all files in the given directory searching for classes.
     *
     * @param \Iterator|string         $path      The path to search in or an iterator
     * @param string                   $whitelist Regex that matches against the file path
     * @param \Composer\IO\IOInterface $io
     *
     * @throws \RuntimeException When the path is neither an existing file nor directory
     *
     * @return array A class map array
     */
    public static function createMap($path, $whitelist = null, IOInterface $io = null)
    {
        if (is_string($path)) {
            if (is_file($path)) {
                $path = array(new \SplFileInfo($path));
            } elseif (is_dir($path)) {
                $path = Finder::create()->files()->followLinks()->name('/\.('.implode('|', self::$extensions).')$/')->in($path);
            } else {
                throw new \RuntimeException(
                    'Could not scan for classes inside "'.$path.
                    '" which does not appear to be a file nor a folder'
                );
            }
        }

        $map = array();

        /** @var \Symfony\Component\Finder\SplFileInfo $file */
        foreach ($path as $file) {
            $filePath = $file->getRealPath();

            if (!in_array(pathinfo($filePath, PATHINFO_EXTENSION), self::$extensions)) {
                continue;
            }

            if ($whitelist && !preg_match($whitelist, strtr($filePath, '\\', '/'))) {
                continue;
            }

            $classes = self::findClasses($filePath);

            foreach ($classes as $class) {
                if (!isset($map[$class])) {
                    $map[$class] = $filePath;
                } elseif ($io && $map[$class] !== $filePath && !preg_match('{/(test|fixture)s?/}i', strtr($map[$class].' '.$filePath, '\\', '/'))) {
                    $io->write(
                        '<warning>Warning: Ambiguous class resolution, "'.$class.'"'.
                        ' was found in both "'.$map[$class].'" and "'.$filePath.'", the first will be used.</warning>'
                    );
                }
            }
        }

        return $map;
    }

    /**
     * Extract the classes in the given file.
     *
     * @param string $path The file to check
     *
     * @throws \RuntimeException
     *
     * @return array The found classes
     */
    private static function findClasses($path)
    {
        $traits = version_compare(PHP_VERSION, '5.4', '<') ? '' : '|trait';

        try {
            $contents = php_strip_whitespace($path);
        } catch (\Exception $e) {
            throw new \RuntimeException('Could not scan for classes inside '.$path.": \n".$e->getMessage(), 0, $e);
        }

        // return early if there is no chance of matching anything in this file
        if (!preg_match('{\b(?:class|interface'.$traits.')\s}i', $contents)) {
            return array();
        }

        // strip heredocs/nowdocs
        $contents = preg_replace('{<<<\'?(\w+)\'?(?:\r\n|\n|\r)(?:.*?)(?:\r\n|\n|\r)\\1(?=\r\n|\n|\r|;)}s', 'null', $contents);
        // strip strings
        $contents = preg_replace('{"[^"\\\\]*(\\\\.[^"\\\\]*)*"|\'[^\'\\\\]*(\\\\.[^\'\\\\]*)*\'}s', 'null', $contents);
        // strip leading non-php code if needed
        if (substr($contents, 0, 2) !== '<?') {
            $contents = preg_replace('{^.+?<\?}s', '<?', $contents);
        }
        // strip non-php blocks in the file
        $contents = preg_replace('{\?>.+<\?}s', '?><?', $contents);
        // strip trailing non-php code if needed
        $pos = strrpos($contents, '?>');
        if (false !== $pos && false === strpos(substr($contents, $pos), '<?')) {
            $contents = substr($contents, 0, $pos);
        }

        preg_match_all('{
            (?:
                 \b(?<![\$:>])(?P<type>class|interface'.$traits.') \s+ (?P<name>[a-zA-Z_\x7f-\xff][a-zA-Z0-9_\x7f-\xff]*)
               | \b(?<![\$:>])(?P<ns>namespace) (?P<nsname>\s+[a-zA-Z_\x7f-\xff][a-zA-Z0-9_\x7f-\xff]*(?:\s*\\\\\s*[a-zA-Z_\x7f-\xff][a-zA-Z0-9_\x7f-\xff]*)*)? \s*[\{;]
            )
        }ix', $contents, $matches);

        $classes = array();
        $namespace = '';

        for ($i = 0, $len = count($matches['type']); $i < $len; $i++) {
            if (!empty($matches['ns'][$i])) {
                $namespace = str_replace(array(' ', "\t", "\r", "\n"), '', $matches['nsname'][$i]).'\\';
            } else {
                $classes[] = ltrim($namespace.$matches['name'][$i], '\\');
            }
        }

        return $classes;
    }
}
