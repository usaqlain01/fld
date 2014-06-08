<?php

use Drupal\DrupalExtension\Context\DrupalContext;
use Drupal\DrupalExtension\Context\DrupalSubContextInterface;
use Behat\Behat\Context\BehatContext;

class FmnhMigrateSubContext extends BehatContext implements DrupalSubContextInterface {

  public static function getAlias() {
    return 'fmnh_migrate';
  }

  /**
   * @Given /^Source node (\d+) has been migrated$/
   */
  public function sourceNodeHasBeenMigrated($arg1) {
    /** @var DrupalContext $mainContext */
    $mainContext = $this->getMainContext();
    $destids = $this->lookupDestinationNid($arg1);
    $mainContext->getSession()->visit($mainContext->locatePath('node/'. $destids['destid1']));
  }

  /**
   * @Then /^I see breadcrumbs for "([^"]*)"$/
   * @Then /^I see breadcrumbs for "([^"]*)" and "([^"]*)"$/
   * @Then /^I see breadcrumbs for "([^"]*)" and "([^"]*)" and "([^"]*)"$/
   */
  public function iSeeBreadcrumbsFor($arg1, $arg2 = NULL, $arg3 = NULL) {
    /** @var DrupalContext $mainContext */
    $mainContext = $this->getMainContext();
    $args = array_filter(array_map('trim', func_get_args()));
    /** @var \Behat\Mink\Element\DocumentElement $page */
    $page = $mainContext->getSession()->getPage();
    $links = $page->findAll('css', 'nav.breadcrumb a');

    foreach ($args as $arg) {
      foreach ($links as $link) {
        /** @var \Behat\Mink\Element\NodeElement $link */
        if ($link->hasAttribute('href')) {
          if ($this->searchInUrl($arg, $link->getAttribute('href'))) {
            continue 2;
          }
        }
      }
      throw new Exception(sprintf('Supposed to map under %s but does not.', $arg));
    }
  }

  protected function searchInUrl($needle, $haystack) {
    foreach (explode('/', $haystack) as $part) {
      if ($needle === trim($part, " \t\n\r\0\x0B\/")) {
        return true;
      }
    }
    return false;
  }

  /**
   * @Transform /^source node (\d+)$/
   */
  protected function lookupDestinationNid($sourceNid) {
    /** @var DrupalContext $mainContext */
//    $mainContext = $this->getMainContext();
//    $mainContext->getDrupal();
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
