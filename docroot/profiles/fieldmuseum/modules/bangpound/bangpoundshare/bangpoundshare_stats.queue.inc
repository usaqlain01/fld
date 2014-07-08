<?php

/**
 * Service Links Analytics Queue
 *
 * Class uses data table as queue table.
 *
 * @see SystemQueue
 */
class ServiceLinksAnalyticsQueue implements DrupalReliableQueueInterface {
  /**
   * The name of the queue this instance is working with.
   *
   * @var string
   */
  protected $name;

  public function __construct($name) {
    $this->name = $name;
  }

  public function createItem($data) {
    return drupal_write_record('bangpoundshare_stats', $data);
  }

  public function numberOfItems() {
    $query = db_select('bangpoundshare_stats')
      ->condition('pending', 1)
      ->condition('refresh', time(), '<');

    $query->addExpression('COUNT(*)');
    return $query->execute()->fetchField();
  }

  public function claimItem($lease_time = 30) {
    // Claim an item by updating its expire fields.
    while (TRUE) {
      $query = db_select('bangpoundshare_stats')
        ->fields('bangpoundshare_stats', array('entity_type', 'entity_id', 'service'))
        ->condition('expire', 0)
        ->condition('pending', 1)
        ->condition('refresh', time(), '<')
        ->orderBy('refresh', 'ASC')
        ->range(0, 1);

      $item = $query->execute()->fetchObject();
      if ($item) {
        $item->data = clone $item;

        // Try to update the item.
        $update = db_update('bangpoundshare_stats')
          ->fields(array(
            'expire' => time() + $lease_time,
          ))
          ->condition('entity_type', $item->data->entity_type)
          ->condition('entity_id', $item->data->entity_id)
          ->condition('service', $item->data->service)
          ->condition('expire', 0);

        // If there are affected rows, this update succeeded.
        if ($update->execute()) {
          return $item;
        }
      }
      else {
        // No items currently available to claim.
        return FALSE;
      }
    }
  }

  public function releaseItem($item) {
    return db_update('bangpoundshare_stats')
      ->fields(array(
        'expire' => 0,
        'pending' => 0,
      ))
      ->condition('entity_type', $item->data->entity_type)
      ->condition('entity_id', $item->data->entity_id)
      ->condition('service', $item->data->service)
      ->execute();
  }

  public function deleteItem($item) {
    return $this->releaseItem($item);
  }

  public function createQueue() {
    // Queue is the data table.
  }

  public function deleteQueue() {
    // Never drop the data table.
  }
}
