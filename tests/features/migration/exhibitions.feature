Feature: Events, programs and exhibition content migration
  In order for the content to remain findable
  for web site users
  the migration process must achieve specific milestones

  @api
  Scenario Outline: Viewing a migrated node
    Given Source node <source-nid> has been migrated
    Then I see breadcrumbs for "<section>" and "<type>"

    Examples:
      | source-nid | section      | type        | sub-type    |
      | 18461      | at-the-field | exhibitions | special     |
      | 17431      | at-the-field | exhibitions | special     |
      | 18336      | at-the-field | exhibitions | special     |
      | 18361      | at-the-field | exhibitions | special     |
      | 17891      | at-the-field | exhibitions | special     |
      | 17501      | at-the-field | exhibitions | special     |
      | 17091      | at-the-field | exhibitions | special     |
      | 2691       | at-the-field | exhibitions | special     |
      | 11211      | at-the-field | exhibitions | special     |
      | 9471       | at-the-field | exhibitions | permanent   |
      | 7971       | at-the-field | exhibitions | permanent   |
      | 119        | at-the-field | exhibitions | permanent   |
      | 11216      | at-the-field | exhibitions | permanent   |
      | 120        | at-the-field | exhibitions | permanent   |
      | 4797       | at-the-field | exhibitions | permanent   |
      | 2466       | at-the-field | exhibitions | permanent   |
      | 2751       | at-the-field | exhibitions | permanent   |
      | 2596       | at-the-field | exhibitions | permanent   |
      | 11176      | at-the-field | exhibitions | permanent   |
      | 11166      | at-the-field | exhibitions | permanent   |
      | 2471       | at-the-field | exhibitions | permanent   |
      | 11171      | at-the-field | exhibitions | permanent   |
      | 11206      | at-the-field | exhibitions | permanent   |
      | 6826       | at-the-field | exhibitions | permanent   |
      | 11201      | at-the-field | exhibitions | permanent   |
      | 4792       | at-the-field | exhibitions | 3d-movie    |
      | 16071      | at-the-field | exhibitions | 3d-movie    |
      | 16711      | at-the-field | exhibitions | 3d-movie    |
      | 18806      | at-the-field | exhibitions | coming-soon |
      | 18321      | at-the-field | exhibitions | past        |
      | 14401      | at-the-field | exhibitions | past        |
      | 16366      | at-the-field | exhibitions | past        |
      | 15891      | at-the-field | exhibitions | past        |
      | 15481      | at-the-field | exhibitions | past        |
      | 17786      | at-the-field | exhibitions | past        |
      | 16826      | at-the-field | exhibitions | past        |
      | 14406      | at-the-field | exhibitions | past        |
      | 14356      | at-the-field | exhibitions | past        |
      | 14771      | at-the-field | exhibitions | past        |
      | 14361      | at-the-field | exhibitions | past        |
      | 1951       | at-the-field | exhibitions | past        |
      | 12736      | at-the-field | exhibitions | past        |
      | 13621      | at-the-field | exhibitions | past        |
      | 1731       | at-the-field | exhibitions | past        |
      | 13031      | at-the-field | exhibitions | past        |
      | 9146       | at-the-field | exhibitions | past        |
      | 13266      | at-the-field | exhibitions | past        |
      | 6861       | at-the-field | exhibitions | past        |
      | 6871       | at-the-field | exhibitions | past        |
      | 8086       | at-the-field | exhibitions | past        |
      | 9141       | at-the-field | exhibitions | past        |
      | 2156       | at-the-field | exhibitions | past        |
      | 1266       | at-the-field | exhibitions | past        |
      | 1366       | at-the-field | exhibitions | past        |
      | 6456       | at-the-field | exhibitions | past        |
      | 7221       | at-the-field | exhibitions | past        |
      | 4196       | at-the-field | exhibitions | past        |
      | 4236       | at-the-field | exhibitions | past        |
      | 4361       | at-the-field | exhibitions | past        |
      | 7216       | at-the-field | exhibitions | past        |
      | 4376       | at-the-field | exhibitions | past        |
      | 7196       | at-the-field | exhibitions | past        |
      | 4426       | at-the-field | exhibitions | past        |
      | 7191       | at-the-field | exhibitions | past        |
      | 4491       | at-the-field | exhibitions | past        |
      | 6981       | at-the-field | exhibitions | past        |
      | 4501       | at-the-field | exhibitions | past        |
      | 4526       | at-the-field | exhibitions | past        |
      | 4531       | at-the-field | exhibitions | past        |
      | 4556       | at-the-field | exhibitions | past        |
      | 4581       | at-the-field | exhibitions | past        |
      | 4591       | at-the-field | exhibitions | past        |
      | 4676       | at-the-field | exhibitions | past        |
      | 4681       | at-the-field | exhibitions | past        |
      | 4686       | at-the-field | exhibitions | past        |
      | 4701       | at-the-field | exhibitions | past        |
      | 4726       | at-the-field | exhibitions | past        |
      | 4736       | at-the-field | exhibitions | past        |
      | 4737       | at-the-field | exhibitions | past        |
      | 5471       | at-the-field | exhibitions | past        |
      | 18406      | at-the-field | programs    | families    |
      | 7041       | at-the-field | programs    | families    |
      | 551        | at-the-field | programs    | families    |
      | 4281       | at-the-field | programs    | educators   |
      | 6791       | at-the-field | programs    | teens       |
      | 18781      | at-the-field | programs    | adults      |
      | 17396      | at-the-field | programs    | adults      |
      | 18576      | at-the-field | programs    | families    |
      | 13446      | at-the-field | programs    | families    |
      | 9166       | at-the-field | programs    | scouts      |
