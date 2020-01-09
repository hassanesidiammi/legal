<?php

namespace Drupal\devutils\Controller;

use Drupal\Core\Controller\ControllerBase;

/**
 * Returns responses for devutils routes.
 */
class DevutilsController extends ControllerBase {

  /**
   * Builds the response.
   */
  public function build() {

    $build['content'] = [
      '#type' => 'item',
      '#markup' => $this->t('It works!'),
    ];

    return $build;
  }

}
