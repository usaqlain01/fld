Feature: Educators content migration
  In order for the content to remain findable
  for web site users
  the migration process must achieve specific milestones

  @api
  Scenario Outline: Viewing a migrated node
    Given Source node <source-nid> has been migrated
    Then I see breadcrumbs for "<section>" and "<type>"

  Examples:
    | source-nid | section   | type                     | sub-type |
    | 159        | educators |                          |          |
    | 2896       | educators | field-trip-programs      |          |
    | 3616       | educators | field-trip-programs      |          |
    | 2911       | educators | field-trip-programs      |          |
    | 3581       | educators | field-trip-programs      |          |
    | 3526       | educators | field-trip-programs      |          |
    | 11436      | educators | field-trip-programs      |          |
    | 175        | educators | field-trip-logistics     |          |
    | 756        | educators | field-trip-logistics     |          |
    | 10851      | educators | field-trip-logistics     |          |
    | 132        | educators | field-trip-logistics     |          |
    | 15516      | educators | virtual-visits           |          |
    | 4286       | educators | resources                |          |
    | 1171       | educators | resources                |          |
    | 1286       | educators | resources                |          |
    | 171        | educators | resources                |          |
    | 17916      | educators | resources                |          |
    | 10991      | educators | professional-development |          |
    | 167        | educators | professional-development |          |
    | 168        | educators | professional-development |          |
    | 166        | educators | professional-development |          |
    | 169        | educators | partnerships             |          |
