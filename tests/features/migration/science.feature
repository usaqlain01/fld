Feature: Support the museum content migration
  In order for the content to remain findable
  for web site users
  the migration process must achieve specific milestones

  @api
  Scenario Outline: Viewing a migrated node
    Given Source node <source-nid> has been migrated
    Then I see breadcrumbs for "<section>" and "<type>"

  Examples:
    | source-nid | section | type           | sub-type    |
    | 11866      | science |                |             |
    | 9186       | science |                |             |
    | 176        | science |                |             |
    | 6896       | science |                |             |
    | 5961       | science |                |             |
    | 5656       | science |                |             |
    | 5326       | science |                |             |
    | 7031       | science | resources      | publication |
    | 4641       | science | resources      | publication |
    | 5946       | science | resources      | publication |
    | 5951       | science | resources      | publication |
    | 4636       | science | resources      | publication |
    | 4606       | science | resources      | publication |
    | 4631       | science | resources      | publication |
    | 5966       | science | resources      | publication |
    | 4656       | science | resources      | publication |
    | 4601       | science | resources      | publication |
    | 4716       | science | library        |             |
    | 5486       | science | library        |             |
    | 5491       | science | library        |             |
    | 5506       | science | library        |             |
    | 6471       | science | library        |             |
    | 4752       | science | library        |             |
    | 5361       | science | library        |             |
    | 5371       | science | library        |             |
    | 5376       | science | library        |             |
    | 5426       | science | library        |             |
    | 5431       | science | library        |             |
    | 8761       | science | library        |             |
    | 18741      | science | library        |             |
    | 5671       | science | library        |             |
    | 5666       | science | library        |             |
    | 5496       | science | library        |             |
    | 5711       | science | library        |             |
    | 6291       | science | library        |             |
    | 5191       | science | archive        |             |
    | 5206       | science | archive        |             |
    | 5251       | science | archive        |             |
