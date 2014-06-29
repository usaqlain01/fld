<?php

use Cilex\Provider\Console\ContainerAwareApplication;
use Symfony\Component\Console\Input\InputInterface;

class Application extends ContainerAwareApplication
{
    protected function getCommandName(InputInterface $input)
    {
        // This should return the name of your command.
        return 'assetic:dump';
    }

    protected function getDefaultCommands()
    {
        $defaultCommands = parent::getDefaultCommands();

        $defaultCommands[] = new DumpCommand();

        return $defaultCommands;
    }

    public function getDefinition()
    {
        $inputDefinition = parent::getDefinition();
        // clear out the normal first argument, which is the command name
        $inputDefinition->setArguments();

        return $inputDefinition;
    }
}
