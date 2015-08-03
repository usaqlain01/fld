<?php

namespace Drufony\Bridge\Twig;

use Symfony\Component\HttpFoundation\RequestStack;

/**
 * Class ToolbarExtension.
 */
class ToolbarExtension extends \Twig_Extension
{
    /**
     * @var RequestStack
     */
    private $requestStack;

    /**
     * @param RequestStack $requestStack
     */
    public function __construct(RequestStack $requestStack)
    {
        $this->requestStack = $requestStack;
    }

    /**
     * {@inheritdoc}
     */
    public function getGlobals()
    {
        $toolbar_classes = array();
        if (user_access('access toolbar')) {
            $toolbar_classes[] = 'toolbar';
            if (!_toolbar_is_collapsed()) {
                $toolbar_classes[] = 'toolbar-drawer';
            }
        }

        return array(
            'toolbar_class' => implode(' ', $toolbar_classes),
        );
    }

    /**
     * {@inheritdoc}
     */
    public function getFunctions()
    {
        return array(
            new \Twig_SimpleFunction('toolbar', array($this, 'renderToolbar'), array('is_safe' => array('html'))),
        );
    }

    /**
     * Clumsily render the Drupal 7 toolbar inside a Twig page.
     */
    public function renderToolbar()
    {
        if ($this->requestStack->getCurrentRequest() === $this->requestStack->getMasterRequest()) {
            $toolbar = array(
                '#pre_render' => array('toolbar_pre_render', 'shortcut_toolbar_pre_render'),
                '#access' => user_access('access toolbar'),
                'toolbar_drawer' => array(),
            );
            $toolbar = array_merge($toolbar, toolbar_view());
            $content = render($toolbar);

            return $content;
        }
    }

    /**
     * {@inheritdoc}
     */
    public function getName()
    {
        return 'drupal_toolbar_extension';
    }
}
