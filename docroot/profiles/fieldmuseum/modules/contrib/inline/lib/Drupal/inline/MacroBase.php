<?php

/**
 * @file
 * Contains Drupal\inline\MacroBase.
 */

namespace Drupal\inline;

abstract class MacroBase implements MacroInterface {

  /**
   * The inline macro tag/type/identifier of this implementation.
   *
   * @todo Replace the tag/type/identifier in macros with the literal class name;
   *   e.g., "EntityMacro" instead of "entity" ?
   *
   * @var string
   */
  protected $macroType;

  public function __construct() {
    if (!isset($this->macroType)) {
      throw new \RuntimeException(sprintf('Missing macroType definition for %s.', get_class($this)));
    }
  }

  public function getType() {
    return $this->macroType;
  }
}
