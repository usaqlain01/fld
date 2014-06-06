<?php

use Drupal\DrupalExtension\Context\DrupalSubContextInterface;
use Behat\Behat\Context\BehatContext;

class FmnhMigrateSubContext extends BehatContext implements DrupalSubContextInterface {

  public static function getAlias() {
    return 'fmnh_migrate';
  }

  /**
   * @Given /^I want to view (source node [\d]+)$/
   */
  public function iWantToViewSourceNode($nid) {
    $this->getMainContext()->getDrupal()->getDriver()->bootstrap();
    $source_migrations = array(
      'ArticleNode',
      'BlogNode',
      'CollectionNode',
      'DepartmentNode',
      'EducationalResourceArticleNode',
      'EventNode',
      'ExhibitNode',
      'FaqNode',
      'ItineraryArticleNode',
      'NewsForGeneralAudiencesArticleNode',
      'NewsletterNode',
      'PhotoGalleryNode',
      'PodcastNode',
      'PressMaterialsArticleNode',
      'ProgramArticleNode',
      'PublicationArticleNode',
      'ResearchScienceArticleNode',
      'VideoNode',
      'WebformNode',
    );

    foreach ($source_migrations as $source_migration) {
      /** @var \Migration $migration */
      $migration = \Migration::getInstance($source_migration);
      if ($destids = $migration->getMap()->lookupDestinationID(array($nid))) {
        if (!empty($destids['destid1'])) {
          return $destids['destid1'];
        }
      }
    }
    throw new PendingException();
  }

  /**
   * @When /^I load destination node\/(\d+)$/
   */
  public function iLoadDestinationNode($nid) {
    throw new PendingException();
  }

  /**
   * @Then /^I see <section>$/
   */
  public function iSeeSection($section) {
    throw new PendingException();
  }

  /**
   * @Transform /^source node (\d+)$/
   */
  public function lookupDestinationNid($sourceNid) {

  }
}
