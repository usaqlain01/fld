Feature: Calendar

  @api
  Scenario: Filter categories without anything to show should not be shown.
    Given "audience" terms:
      | name     |
      | Bears    |
      | Badgers  |
      | Vipers   |
    When I go to "/at-the-field/calendar"
    # All the below are about the menu in the sidebar.
    Then I should not see "Bears"
    And I should not see "Badgers"
    And I should not see "Vipers"
    And I should not see "Starting soon"
    And I should not see "Ending"

  @api
  Scenario: Looking for current exhibitions
    Given "exhibit" nodes:
      | title     | field_date                              |
      | Exhibit A | 2014-07-01 00:00:00,2015-07-01 00:00:00 |
      | Exhibit B | 2014-06-01 00:00:00,2015-07-01 00:00:00 |
      | Exhibit C | 2013-06-01 00:00:00,2014-07-01 00:00:00 |
    When I go to "/at-the-field/exhibitions"
    Then I should see "Exhibit B"
    And I should see "Exhibit C"
    But I should not see "Exhibit A"
    # because it's in the past

  @api
  Scenario: Create some programs
    Given "audience" terms:
      | name     |
      | Bears    |
      | Badgers  |
      | Vipers   |
    Given "program" nodes:
      | title     | field_audience |
      | Program A | Bears          |
      | Program B | Badgers        |
      | Program C | Vipers         |
    When I go to "/at-the-field/programs/badgers"
    Then I should see "Program B"
    But I should not see "Program A"
    And I should not see "Program C"
    # Because the latter two are not for the "badger" audience.

  @api
  Scenario: Create some events and find them on the right pages
    Given "program" nodes:
      | title     |
      | Program A |
      | Program B |
      | Program C |
    Given "event" nodes:
      | title | field_program | field_date          |
      |       | Program A     | 2014-07-10 00:00:00 |
      |       | Program B     | 2014-07-10 00:00:00 |
      |       | Program C     | 2013-06-10 00:00:00 |
    When I go to "/at-the-field/calendar"
    Then I should see "Program A"
    And I should see "Program B"
    But I should not see "Program C"

  @api
  Scenario: Create an event that is coming soon
    Given "exhibit" nodes:
      | title     | field_date                              |
      | Exhibit A | 2014-07-01 00:00:00,2015-07-01 00:00:00 |
    When I go to "/at-the-field/calendar"
    Then I should see "Starting soon"
    When I go to "/at-the-field/calendar/starting"
    Then I should see "Exhibit A"
    But I should not see "Ending"

  @api
  Scenario: Create an event for a program without a title.
    Given "program" nodes:
      | title     |
      | Program A |
    Given I am viewing an "event" node:
      | field_program | field_date          |
      | Program A     | 2014-07-10 00:00:00 |
    Then I should see the heading "Program A"

