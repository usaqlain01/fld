Feature: Plan your visit section migration
  In order for the content to remain findable
  for web site users
  the migration process must achieve specific milestones

  @api
  Scenario Outline: Viewing a migrated node
    Given Source node <source-nid> has been migrated
    When I load the destination node
    Then I see section <section>

    Examples:
      | source-nid  | section |
      |        1006 | visit   |
      |         906 | visit   |
      |        3311 | visit   |
      |        6811 | visit   |
      |         128 | visit   |
      |       18181 | visit   |
      |        1116 | visit   |
      |       18416 | visit   |
      |        6411 | visit   |
      |       11361 | visit   |
      |         556 | visit   |
      |        4822 | visit   |
      |         666 | visit   |
      |         188 | visit   |
      |        3521 | visit   |
      |        5771 | visit   |
      |        5776 | visit   |
      |        3476 | visit   |
      |        5641 | visit   |
      |        5726 | visit   |
      |        5736 | visit   |
      |        5741 | visit   |
      |        5601 | visit   |
      |        5751 | visit   |
      |        5596 | visit   |
      |        5746 | visit   |
      |        5756 | visit   |
      |        5556 | visit   |
      |        5586 | visit   |
      |        5591 | visit   |
      |        5606 | visit   |
      |        5611 | visit   |
      |        5621 | visit   |
      |        5786 | visit   |
      |        5571 | visit   |
      |        3651 | visit   |
      |        5851 | visit   |
      |        5791 | visit   |
      |        5626 | visit   |
      |        4706 | visit   |
      |       12101 | visit   |
      |        5561 | visit   |
      |        6351 | visit   |
