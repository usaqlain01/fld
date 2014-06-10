Feature: Calendar

    Scenario: Looking for current exhibitions
      Given that I am at "/at-the-field/exhibitions"


    @api
    Scenario: Create some programs
      Given "audience" terms:
        | name      |
        | Bears     |
        | Badgers   |
        | Vipers    |
      Given "program" nodes:
        | title     |
        | Program A |
        | Program B |
        | Program C |
      When I go to "/at-the-field/programs/badgers"
      Then I should see "Program B"
