Feature: Calendar

  Scenario: Looking for current exhibitions
    Given that I am at "/at-the-field/exhibitions"

  @api
  Scenario: Create some programs
    Given "program" nodes:
      | title     | field_audience |
      | Program A | Bears          |
      | Program B | Badgers        |
      | Program C | Vipers         |
    When I go to "/at-the-field/programs/badgers"
    Then I should see "Program B"

  @api
  Scenario: Create some events
    Given "program" nodes:
      | title     |
      | Program A |
      | Program B |
      | Program C |
    Given "event" nodes:
      | title          | field_program | field_date          |
      | Program A      | Program A     | 2014-06-10 00:00:00 |
      | Program B      | Program B     | 2014-06-10 00:00:00 |
      | Program C      | Program C     | 2014-06-10 00:00:00 |
    When I go to "/at-the-field/calendar"
    Then I should see "Program A"
