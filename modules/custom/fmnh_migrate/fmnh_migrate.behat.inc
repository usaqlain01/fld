<?php

use Drupal\DrupalExtension\Context\DrupalSubContextInterface;
use Behat\Behat\Context\BehatContext;

class FmnhMigrateSubContext extends BehatContext implements DrupalSubContextInterface {

  private $sourceid;
  private $destids;

  public static function getAlias() {
    return 'fmnh_migrate';
  }

  /**
   * @Given /^Source node (\d+) has been migrated$/
   */
  public function sourceNodeHasBeenMigrated($arg1) {
    $this->sourceid = $arg1;
  }

  /**
   * @When /^I load the destination node$/
   */
  public function iLoadTheDestinationNode() {
    $this->destids = $this->lookupDestinationNid($this->sourceid);
    $this->getMainContext()->getSession()->visit($this->getMainContext()->locatePath('node/'. $this->destids['destid1']));
  }

  /**
   * @Then /^I see section ([^\/]*)$/
   */
  public function iSeeSection($section)
  {
    /** @var \Behat\Mink\Element\DocumentElement $page */
    $page = $this->getMainContext()->getSession()->getPage();
    $link = $page->findLink('css', '.active a');
    if ($link && $link->hasAttribute('href')) {
      if (trim($section, " \t\n\r\0\x0B\/") === trim($link->hasAttribute('href'), " \t\n\r\0\x0B\/")) {
        return;
      }
    }
    throw new Exception(sprintf('Supposed to map under %s but does not.', $section));
  }

  /**
   * @Transform /^source node (\d+)$/
   */
  protected function lookupDestinationNid($sourceNid) {
    $this->getMainContext()->getDrupal()->getDriver();
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
      $destid1 = $migration->getMap()->lookupDestinationID(array($sourceNid));
      if ($destid1) {
        return $destid1;
      }
    }
  }
}
