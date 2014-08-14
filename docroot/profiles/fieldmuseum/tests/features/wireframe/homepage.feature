Feature: Home page

  Scenario: Viewing the home page
    Given that I am at "/"
    When I go to the homepage
    Then I should be on the homepage
