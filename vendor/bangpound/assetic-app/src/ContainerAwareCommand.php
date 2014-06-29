<?php

use Pimple\Container;
use Cilex\Provider\Console\ContainerAwareApplication;

abstract class ContainerAwareCommand extends \Symfony\Component\Console\Command\Command
{
    /**
     * @var ContainerAwareApplication|null
     */
    private $container;

    /**
     * @return Container
     * @throws \LogicException
     */
    protected function getContainer()
    {
        if (null === $this->container) {
            /** @var ContainerAwareApplication $application */
            $application = $this->getApplication();
            if (null === $application) {
                throw new \LogicException('The container cannot be retrieved as the application instance is not yet set.');
            }

            $this->container = $application->getContainer();
        }

        return $this->container;
    }

    /**
     * {@inheritdoc}
     */
    public function setContainer(Container $container = null)
    {
        $this->container = $container;
    }
}
