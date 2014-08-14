<?php
abstract class WebformMigration extends DrupalMigration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->source = new MigrateSourceSQL($this->query(), $this->sourceFields,
      NULL, $this->sourceOptions);

    $schema = drupal_get_schema($arguments['source_table']);
    $keys = array();
    foreach ($schema['primary key'] as $primary_key) {
      // We can't have any form of serial fields here, since the mapping table
      // already has it's own.
      $schema['fields'][$primary_key]['auto_increment'] = FALSE;
      if ($schema['fields'][$primary_key]['type'] == 'serial') {
        $schema['fields'][$primary_key]['type'] = 'int';
      }

      $keys[$primary_key] = $schema['fields'][$primary_key];
    }


    $this->map = new MigrateSQLMap($this->machineName,
      $keys,
      MigrateDestinationTable::getKeySchema($arguments['destination_table'])
    );

    $this->destination = new MigrateDestinationTable($arguments['destination_table']);
  }
}
