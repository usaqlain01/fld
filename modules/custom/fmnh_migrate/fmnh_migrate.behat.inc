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
    $mainContext = $this->getMainContext();
    $this->destids = $this->lookupDestinationNid($this->sourceid);
    $mainContext->getSession()->visit($mainContext->locatePath('node/'. $this->destids['destid1']));
  }

  /**
   * @Then /^I see section "([^\/]*)"$/
   */
  public function iSeeSection($section)
  {
    /** @var \Behat\Mink\Element\DocumentElement $page */
    $page = $this->getMainContext()->getSession()->getPage();
    $links = $page->findAll('css', '.active-trail a,.active a,.is-active a');

    foreach ($links as $link) {
      if ($link && $link->hasAttribute('href')) {
        if ($this->searchInUrl($section, $link->getAttribute('href'))) {
          return;
        }
      }
    }
    throw new Exception(sprintf('Supposed to map under %s but does not.', $section));
  }

  /**
   * @Given /^it has type "([^"]*)"$/
   */
  public function itHasType($arg1) {
    /** @var \Behat\Mink\Element\DocumentElement $page */
    $page = $this->getMainContext()->getSession()->getPage();
    $links = $page->findAll('css', '.active-trail a,.active a,.is-active a');

    foreach ($links as $link) {
      if ($link && $link->hasAttribute('href')) {
        if ($this->searchInUrl($arg1, $link->getAttribute('href'))) {
          return;
        }
      }
    }
    throw new Exception(sprintf('Supposed to map under %s but does not.', $arg1));
  }

  /**
   * @Given /^it has subtype "([^"]*)"$/
   */
  public function itHasSubtype($arg1) {
    throw new \Behat\Behat\Exception\PendingException();
  }

  protected function searchInUrl($needle, $haystack) {
    foreach (explode('/', $haystack) as $part) {
      if (trim($needle, " \t\n\r\0\x0B\/") === trim($part, " \t\n\r\0\x0B\/")) {
        return true;
      }
    }
    return false;
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
