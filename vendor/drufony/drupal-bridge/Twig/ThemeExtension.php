<?php

namespace Drufony\Bridge\Twig;

/**
 * Class ThemeExtension.
 */
class ThemeExtension extends \Twig_Extension
{
    /**
     * {@inheritdoc}
     */
    public function getFunctions()
    {
        return array(
            new \Twig_SimpleFunction('theme', 'theme', array('is_safe' => array('html'))),
        );
    }

    /**
     * {@inheritdoc}
     */
    public function getName()
    {
        return 'drupal_theme_extension';
    }
}
