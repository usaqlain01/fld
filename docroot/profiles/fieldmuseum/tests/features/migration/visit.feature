Feature: Plan your visit section migration
  In order for the content to remain findable
  for web site users
  the migration process must achieve specific milestones

  @api
  Scenario Outline: Viewing a migrated node
    Given Source node <source-nid> has been migrated
    Then I see breadcrumbs for "<section>" and "<type>"

    Examples:
      | source-nid | section | type           | sub-type |
      | 1006       | visit   |                |          |
      | 906        | visit   |                |          |
      | 3311       | visit   |                |          |
      | 6811       | visit   |                |          |
      | 128        | visit   |                |          |
      | 18181      | visit   |                |          |
      | 1116       | visit   |                |          |
      | 18416      | visit   |                |          |
      | 6411       | visit   |                |          |
      | 11361      | visit   |                |          |
      | 556        | visit   |                |          |
      | 4822       | visit   |                |          |
      | 666        | visit   | special-events |          |
      | 188        | visit   | special-events |          |
      | 3521       | visit   | special-events |          |
      | 5771       | visit   | special-events |          |
      | 5776       | visit   | special-events |          |
      | 3476       | visit   | special-events |          |
      | 5641       | visit   | special-events | spaces   |
      | 5726       | visit   | special-events | spaces   |
      | 5736       | visit   | special-events | spaces   |
      | 5741       | visit   | special-events | spaces   |
      | 5601       | visit   | special-events | spaces   |
      | 5751       | visit   | special-events | spaces   |
      | 5596       | visit   | special-events | spaces   |
      | 5746       | visit   | special-events | spaces   |
      | 5756       | visit   | special-events |          |
      | 5556       | visit   | special-events |          |
      | 5586       | visit   | special-events | spaces   |
      | 5591       | visit   | special-events | spaces   |
      | 5606       | visit   | special-events | spaces   |
      | 5611       | visit   | special-events | spaces   |
      | 5621       | visit   | special-events | spaces   |
      | 5786       | visit   | special-events |          |
      | 5571       | visit   | special-events |          |
      | 3651       | visit   | special-events |          |
      | 5851       | visit   | special-events |          |
      | 5791       | visit   | special-events |          |
      | 5626       | visit   | special-events |          |
      | 4706       | visit   | special-events |          |
      | 12101      | visit   | special-events |          |
      | 5561       | visit   | special-events |          |
      | 6351       | visit   | special-events |          |
      | 6336       | visit   | special-events | spaces   |
      | 6341       | visit   | special-events | spaces   |
      | 6346       | visit   | special-events | spaces   |
      | 6036       | visit   | special-events | spaces   |
      | 6331       | visit   | special-events | spaces   |
      | 13881      | visit   | special-events | spaces   |
      | 13866      | visit   | special-events | spaces   |
