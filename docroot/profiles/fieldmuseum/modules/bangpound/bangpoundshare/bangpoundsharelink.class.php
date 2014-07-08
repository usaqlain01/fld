<?php

class bangpoundShareLink {

  /**
   *
   * @param type $name
   * @return boolean
   */
  public function __isset($name) {

    // Until the entity type is set, the requiredcontexts do not exit.
    if ($name == 'requiredcontexts' && !empty($this->entity_type)) {
      return TRUE;
    }
    return FALSE;
  }

  /**
   *
   * @param type $name
   * @return mixed
   */
  public function __get($name) {

    // Setting up a magic pair of required contexts for use during configuration and
    // in hook_entity_view().
    if ($name == 'requiredcontexts' && !empty($this->entity_type)) {
      return array(
        array(
          'identifier' => 'Entity',
          'keyword' => $this->entity_type,
          'name' => 'entity:'. $this->entity_type,
          'entity_id' => '',
          'id' => 1,
        ),
        array(
          'identifier' => 'View mode',
          'keyword' => 'string',
          'name' => 'string',
          'id' => 1,
        )
      );
    }
  }
}
