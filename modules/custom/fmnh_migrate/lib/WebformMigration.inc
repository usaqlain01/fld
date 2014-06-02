<?php
abstract class WebformMigration extends DrupalMigration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->source = new MigrateSourceSQL($this->query(), $this->sourceFields,
      NULL, $this->sourceOptions);

    $this->map = new MigrateSQLMap($this->machineName,
      MigrateDestinationTable::getKeySchema($arguments['source_table']),
      MigrateDestinationTable::getKeySchema($arguments['destination_table'])
    );

    $this->destination = new MigrateDestinationTable($arguments['destination_table']);
  }
} 