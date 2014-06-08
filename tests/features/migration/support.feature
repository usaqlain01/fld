Feature: Support the museum content migration
  In order for the content to remain findable
  for web site users
  the migration process must achieve specific milestones

  @api
  Scenario Outline: Viewing a migrated node
    Given Source node <source-nid> has been migrated
    Then I see breadcrumbs for "<section>" and "<type>"

  Examples:
    | source-nid | section | type         | sub-type          |
    | 138        | support |              |                   |
    | 13731      | support | ways-to-give |                   |
    | 14236      | support | ways-to-give |                   |
    | 17886      | support | ways-to-give |                   |
    | 13491      | support | ways-to-give | womens-board      |
    | 14431      | support | ways-to-give | womens-board      |
    | 17486      | support | ways-to-give | womens-board      |
    | 8401       | support | ways-to-give |                   |
    | 3061       | support | members      |                   |
    | 3116       | support | members      |                   |
    | 3126       | support | members      |                   |
    | 3076       | support | members      |                   |
    | 3101       | support | members      |                   |
    | 3091       | support | members      |                   |
    | 3021       | support | members      |                   |
    | 16551      | support | members      |                   |
    | 6831       | support | members      |                   |
    | 12156      | support | members      |                   |
    | 3226       | support | members      |                   |
    | 151        | support |              |                   |
    | 152        | support | members      |                   |
    | 17511      | support |              |                   |
    | 4006       | support | volunteer    |                   |
    | 4221       | support | volunteer    |                   |
    | 6741       | support | volunteer    |                   |
    | 4241       | support | volunteer    |                   |
    | 13696      | support | ways-to-give | individual-giving |
    | 13761      | support | ways-to-give | individual-giving |
    | 13721      | support | ways-to-give | individual-giving |
    | 13771      | support | ways-to-give | individual-giving |
    | 18541      | support | ways-to-give | individual-giving |
    | 13726      | support | ways-to-give | individual-giving |
    | 13076      | support | ways-to-give | corporate-giving  |
    | 13216      | support | ways-to-give | corporate-giving  |
    | 13526      | support | ways-to-give | corporate-giving  |
    | 13596      | support | ways-to-give | corporate-giving  |
    | 13606      | support | ways-to-give | corporate-giving  |
    | 13536      | support | ways-to-give | corporate-giving  |
    | 13541      | support | ways-to-give | corporate-giving  |
    | 13561      | support | ways-to-give | corporate-giving  |
    | 13586      | support | ways-to-give | corporate-giving  |
    | 13591      | support | ways-to-give | corporate-giving  |
    | 13576      | support | ways-to-give | corporate-giving  |
    | 14681      | support | ways-to-give | corporate-giving  |
    | 12676      | support | ways-to-give | auxiliary-groups  |
    | 12961      | support | ways-to-give | auxiliary-groups  |
    | 13096      | support | ways-to-give | auxiliary-groups  |
    | 13101      | support | ways-to-give | auxiliary-groups  |
    | 12986      | support | ways-to-give | auxiliary-groups  |
    | 12211      | support | ways-to-give | auxiliary-groups  |
    | 13036      | support | ways-to-give | auxiliary-groups  |
    | 13046      | support | ways-to-give | auxiliary-groups  |
    | 13026      | support | ways-to-give | auxiliary-groups  |
    | 13571      | support | ways-to-give | auxiliary-groups  |
    | 12861      | support | ways-to-give | auxiliary-groups  |
    | 12956      | support | ways-to-give | auxiliary-groups  |
    | 12286      | support | ways-to-give | auxiliary-groups  |
    | 12971      | support | ways-to-give | auxiliary-groups  |
    | 13061      | support | ways-to-give | auxiliary-groups  |
