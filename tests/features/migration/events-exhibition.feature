Feature: Events and exhibition section migration
  In order for the content to remain findable
  for web site users
  the migration process must achieve specific milestones

  @api
  Scenario Outline: Viewing a migrated node
    Given I want to view source node <nid>
    Then I see <section>

    Examples:
      | nid        | section       |
      | 18461      | at-the-museum |
