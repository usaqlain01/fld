<?php

/**
 * @file
 * Contains Drupal\inline\MacroInterface.
 */

namespace Drupal\inline;

/**
 * Defines the interface for all inline macro implementations.
 */
interface MacroInterface {

  public function getParameters();

  public function validate(array $context);

  public function prepareView(array $context);

  public function view(array $context);
}
