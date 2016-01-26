<?php

use Drufony\Bridge\Pimple\DrupalServiceProvider;
use Silex\Application;
use Symfony\Component\ExpressionLanguage\Expression;
use Symfony\Component\ExpressionLanguage\ExpressionLanguage;
use Symfony\Component\Yaml\Yaml;

require __DIR__ .'/../vendor/autoload.php';

$pimple = new Application();
$pimple->register(new DrupalServiceProvider(), array(
    'drupal.root' => __DIR__.'/../docroot',
));
$pimple['expression_language'] = function () {
    $language = new ExpressionLanguage();
    $language->register('date_create', function ($time) {
        return sprintf('date_create(%s)', $time);
    }, function (array $values, $time) {
        return date_create($time);
    });
    $language->register('date_format', function ($date, $format) {
        return sprintf('date_format(%s, %s)', $date, $format);
    }, function (array $values, $date, $format) {
        return date_format($date, $format);
    });
    return $language;
};
$pimple->boot();

$input = file_get_contents(__DIR__.'/test_event_nodes.yml');
$data = parse_expressions(Yaml::parse($input));

foreach ($data as $value) {
    $node = (object) $value;
    node_save($node);
}

function parse_expressions($data) {
    global $pimple;
    foreach ($data as $key => $value) {
        if (is_array($value)) {
            $data[$key] = parse_expressions($value);
        }
        if (is_scalar($value)) {
            if (is_string($value) &&  0 === strpos($value, '@=')) {
                $expression = new Expression(substr($value, 2));
                $data[$key] = $pimple['expression_language']->evaluate($expression);
            }
            else {
                $data[$key] = $value;
            }
        }
    }
    return $data;
}
