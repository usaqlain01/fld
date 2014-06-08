Feature: About the museum content migration
  In order for the content to remain findable
  for web site users
  the migration process must achieve specific milestones

  @api
  Scenario Outline: Viewing a migrated node
    Given Source node <source-nid> has been migrated
    When I load the destination node
    Then I see section "<section>"
    And it has type "<type>"
    And it has subtype "<sub-type>"

    Examples:
      | source-nid | section | type                  | sub-type                    |
      | 3906       | about   |                       |                             |
      | 7271       | about   |                       |                             |
      | 6251       | about   |                       |                             |
      | 12541      | about   |                       |                             |
      | 6911       | about   |                       |                             |
      | 187        | about   |                       |                             |
      | 207        | about   |                       |                             |
      | 209        | about   |                       |                             |
      | 5416       | about   | traveling-exhibitions |                             |
      | 5356       | about   | traveling-exhibitions |                             |
      | 5451       | about   | traveling-exhibitions |                             |
      | 5351       | about   | traveling-exhibitions |                             |
      | 5411       | about   | traveling-exhibitions |                             |
      | 5421       | about   | traveling-exhibitions |                             |
      | 6001       | about   | traveling-exhibitions |                             |
      | 5461       | about   | traveling-exhibitions |                             |
      | 7411       | about   |                       |                             |
      |            | about   | press                 |                             |
      |            | about   | press                 |                             |
      | 9231       | about   | press                 |                             |
      | 9226       | about   | press                 |                             |
      | 9251       | about   | press                 |                             |
      | 9271       | about   | press                 |                             |
      | 17686      | about   | press                 |                             |
      | 17071      | about   | press                 |                             |
      | 17076      | about   | press                 |                             |
      | 17691      | about   | press                 |                             |
      | 17061      | about   | press                 |                             |
      | 17066      | about   | press                 |                             |
      | 17696      | about   | press                 |                             |
      | 17051      | about   | press                 |                             |
      | 17056      | about   | press                 |                             |
      | 17701      | about   | press                 |                             |
      | 17041      | about   | press                 |                             |
      | 17046      | about   | press                 |                             |
      | 18116      | about   | press                 |                             |
      | 17711      | about   | press                 |                             |
      | 17021      | about   | press                 |                             |
      | 17026      | about   | press                 |                             |
      | 17716      | about   | press                 |                             |
      | 17011      | about   | press                 |                             |
      | 17016      | about   | press                 |                             |
      | 16996      | about   | press                 |                             |
      | 17721      | about   | press                 |                             |
      | 17001      | about   | press                 |                             |
      | 17736      | about   | press                 |                             |
      | 16966      | about   | press                 |                             |
      | 16971      | about   | press                 |                             |
      | 17741      | about   | press                 |                             |
      | 16956      | about   | press                 |                             |
      | 16961      | about   | press                 |                             |
      | 17746      | about   | press                 |                             |
      | 16936      | about   | press                 |                             |
      | 17751      | about   | press                 |                             |
      | 16946      | about   | press                 |                             |
      | 16951      | about   | press                 |                             |
      | 17411      | about   | press                 |                             |
      | 17381      | about   | press                 |                             |
      | 17386      | about   | press                 |                             |
      | 17876      | about   | press                 |                             |
      | 17841      | about   | press                 |                             |
      | 17836      | about   | press                 |                             |
      | 17846      | about   | press                 |                             |
      | 17851      | about   | press                 |                             |
      | 17856      | about   | press                 |                             |
      | 17861      | about   | press                 |                             |
      | 17866      | about   | press                 |                             |
      | 17871      | about   | press                 |                             |
      | 18836      | about   | press                 |                             |
      | 18761      | about   | press                 |                             |
      | 17096      | about   | press                 |                             |
      | 16556      | about   | press                 |                             |
      | 6836       | about   |                       |                             |
      | 6736       | about   | careers               |                             |
      | 6716       | about   | careers               | internships                 |
      | 6866       | about   | careers               | benefits                    |
      | 4411       | about   | careers               | research-scholarship-grants |
      | 8591       | about   | annual-reports        |                             |
      | 8641       | about   | annual-reports        |                             |
      |            | about   | annual-reports        |                             |
      |            | about   | staff                 |                             |
      |            | about   | staff                 |                             |
      | 210        | about   |                       |                             |
      | 217        | about   |                       |                             |
