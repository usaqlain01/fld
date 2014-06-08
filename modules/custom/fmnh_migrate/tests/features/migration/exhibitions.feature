Feature: Events and exhibition section migration
  In order for the content to remain findable
  for web site users
  the migration process must achieve specific milestones

  @api
  Scenario Outline: Viewing a migrated node
    Given Source node <source-nid> has been migrated
    When I load the destination node
    Then I see section <section>

    Examples:
      |  source-nid | section      |
      |       18461 | at-the-field |
      |       18336 | at-the-field |
      |       17431 | at-the-field |
      |       18361 | at-the-field |
      |       17891 | at-the-field |
      |       17501 | at-the-field |
      |       17091 | at-the-field |
      |        2691 | at-the-field |
      |       11211 | at-the-field |
      |        9471 | at-the-field |
      |        7971 | at-the-field |
      |         119 | at-the-field |
      |       11216 | at-the-field |
      |         120 | at-the-field |
      |        4797 | at-the-field |
      |        2466 | at-the-field |
      |        2751 | at-the-field |
      |        2596 | at-the-field |
      |       11176 | at-the-field |
      |       11166 | at-the-field |
      |        2471 | at-the-field |
      |       11171 | at-the-field |
      |       11206 | at-the-field |
      |        6826 | at-the-field |
      |       11201 | at-the-field |
      |        4792 | at-the-field |
      |       16071 | at-the-field |
      |       16711 | at-the-field |
      |       18806 | at-the-field |
      |       18321 | at-the-field |
      |       14401 | at-the-field |
      |       16366 | at-the-field |
      |       15891 | at-the-field |
      |       15481 | at-the-field |
      |       17786 | at-the-field |
      |       16826 | at-the-field |
      |       14406 | at-the-field |
      |       14356 | at-the-field |
      |       14771 | at-the-field |
      |       14361 | at-the-field |
      |        1951 | at-the-field |
      |       12736 | at-the-field |
      |       13621 | at-the-field |
      |        1731 | at-the-field |
      |       13031 | at-the-field |
      |        9146 | at-the-field |
      |       13266 | at-the-field |
      |        6861 | at-the-field |
      |        6871 | at-the-field |
      |        8086 | at-the-field |
      |        9141 | at-the-field |
      |        2156 | at-the-field |
      |        1266 | at-the-field |
      |        1366 | at-the-field |
      |        6456 | at-the-field |
      |        7221 | at-the-field |
      |        4196 | at-the-field |
      |        4236 | at-the-field |
      |        4361 | at-the-field |
      |        7216 | at-the-field |
      |        4376 | at-the-field |
      |        7196 | at-the-field |
      |        4426 | at-the-field |
      |        7191 | at-the-field |
      |        4491 | at-the-field |
      |        6981 | at-the-field |
      |        4501 | at-the-field |
      |        4526 | at-the-field |
      |        4531 | at-the-field |
      |        4556 | at-the-field |
      |        4581 | at-the-field |
      |        4591 | at-the-field |
      |        4676 | at-the-field |
      |        4681 | at-the-field |
      |        4686 | at-the-field |
      |        4701 | at-the-field |
      |        4726 | at-the-field |
      |        4736 | at-the-field |
      |        4737 | at-the-field |
      |        5471 | at-the-field |
