Feature: Support the museum content migration
  In order for the content to remain findable
  for web site users
  the migration process must achieve specific milestones

  @api
  Scenario Outline: Viewing a migrated node
    Given Source node <source-nid> has been migrated
    Then I see breadcrumbs for "<section>" and "<type>"

  Examples:
    | source-nid | section | type         | sub-type              |
    | 11866      | science |              |                       |
    | 9186       | science |              |                       |
    | 176        | science |              |                       |
    | 6896       | science |              |                       |
    | 5961       | science |              |                       |
    | 5656       | science |              |                       |
    | 5326       | science |              |                       |
    | 7031       | science | resources    | publication           |
    | 4641       | science | resources    | publication           |
    | 5946       | science | resources    | publication           |
    | 5951       | science | resources    | publication           |
    | 4636       | science | resources    | publication           |
    | 4606       | science | resources    | publication           |
    | 4631       | science | resources    | publication           |
    | 5966       | science | resources    | publication           |
    | 4656       | science | resources    | publication           |
    | 4601       | science | resources    | publication           |
    | 69         | science | library      |                       |
    | 4752       | science | library      |                       |
    | 4201       | science | library      |                       |
    | 8761       | science | library      |                       |
    | 4716       | science | library      |                       |
    | 5486       | science | library      |                       |
    | 5491       | science | library      |                       |
    | 5506       | science | library      |                       |
    | 6471       | science | library      |                       |
    | 4752       | science | library      |                       |
    | 5361       | science | library      |                       |
    | 5371       | science | library      |                       |
    | 5376       | science | library      |                       |
    | 5426       | science | library      |                       |
    | 5431       | science | library      |                       |
    | 8761       | science | library      |                       |
    | 18741      | science | library      |                       |
    | 5671       | science | library      |                       |
    | 5666       | science | library      |                       |
    | 5496       | science | library      |                       |
    | 5711       | science | library      |                       |
    | 6291       | science | library      |                       |
    | 5191       | science | archive      |                       |
    | 5206       | science | archive      |                       |
    | 5251       | science | archive      |                       |
    | 176        | science |              |                       |
    | 67         | science | conservation |                       |
    | 80         | science | conservation | science-action-center |
    | 7601       | science | conservation | science-action-center |
    | 77         | science | conservation | science-action-center |
    | 5031       | science | conservation | science-action-center |
    | 79         | science | conservation | science-action-center |
    | 4986       | science | conservation | science-action-center |
    | 5541       | science | conservation | science-action-center |
    | 5526       | science | conservation | science-action-center |
    | 9196       | science | conservation | science-action-center |
    | 8901       | science | conservation | science-action-center |
    | 9201       | science | conservation | science-action-center |
    | 17216      | science | conservation | science-action-center |
    | 8896       | science | conservation | science-action-center |
    | 9666       | science | conservation | science-action-center |
    | 9646       | science | conservation | science-action-center |
    | 16301      | science | conservation | science-action-center |
    | 18206      | science | conservation | science-action-center |
    | 17236      | science | conservation | science-action-center |
    | 16636      | science | conservation | science-action-center |
    | 15601      | science | conservation | science-action-center |
    | 8806       | science | conservation | science-action-center |
    | 8011       | science | conservation | science-action-center |
    | 8826       | science | conservation | science-action-center |
    | 4996       | science | conservation | science-action-center |
    | 7521       | science | conservation | science-action-center |
    | 8836       | science | conservation | science-action-center |
    | 11626      | science | conservation | science-action-center |
    | 8711       | science | conservation | science-action-center |
    | 7761       | science | conservation | science-action-center |
    | 7891       | science | conservation | science-action-center |
    | 7211       | science | conservation | science-action-center |
    | 9301       | science | conservation | science-action-center |
    | 7706       | science | conservation | science-action-center |
    | 6786       | science | conservation | science-action-center |
    | 7731       | science | conservation | science-action-center |
    | 7556       | science | conservation | science-action-center |
    | 7321       | science | conservation | science-action-center |
    | 7431       | science | conservation | science-action-center |
    | 5531       | science | conservation | science-action-center |
    | 7706       | science | conservation | science-action-center |
    | 7896       | science | conservation | science-action-center |
    | 7876       | science | conservation | science-action-center |
    | 7901       | science | conservation | science-action-center |
    | 5541       | science | conservation | science-action-center |
    | 4872       | science | conservation | science-action-center |
    | 7941       | science | conservation | science-action-center |
    | 7916       | science | conservation | science-action-center |
    | 7921       | science | conservation | science-action-center |
    | 7926       | science | conservation | science-action-center |
    | 7436       | science | conservation | science-action-center |
    | 7401       | science | conservation | science-action-center |
    | 77         | science | conservation | science-action-center |
    | 5031       | science | conservation | science-action-center |
    | 7866       | science | conservation | science-action-center |
    | 4862       | science | conservation | science-action-center |
    | 4852       | science | conservation | science-action-center |
    | 7506       | science | conservation | science-action-center |
    | 5766       | science | conservation | science-action-center |
    | 5636       | science | conservation | science-action-center |
    | 5546       | science | conservation | science-action-center |
    | 14006      | science | conservation | science-action-center |
    | 13996      | science | conservation | science-action-center |
    | 5036       | science | conservation | science-action-center |
    | 11426      | science | conservation |                       |
    | 11836      | science | conservation | a-greener-field       |
    | 11931      | science | conservation | a-greener-field       |
    | 11936      | science | conservation | a-greener-field       |
    | 11831      | science | conservation | a-greener-field       |
    | 11896      | science | conservation | a-greener-field       |
    | 14131      | science | conservation | a-greener-field       |
    | 14891      | science | conservation | a-greener-field       |
    | 6511       | science | conservation |                       |
    | 6516       | science | conservation | cultural-heritage     |
    | 6316       | science | conservation | cultural-heritage     |
    | 6306       | science | conservation | cultural-heritage     |
    | 6311       | science | conservation | cultural-heritage     |
    | 6531       | science | conservation | cultural-heritage     |
    | 6521       | science | conservation | cultural-heritage     |
    | 6526       | science | conservation | cultural-heritage     |
    | 59         | science |              |                       |
    | 46         | science | research     |                       |
    | 47         | science | research     |                       |
    | 50         | science | research     |                       |
    | 48         | science | research     |                       |
    | 49         | science | research     |                       |
    | 11286      | science | research     |                       |
    | 4971       | science | research     |                       |
    | 6311       | science | research     |                       |
    | 6316       | science | research     |                       |
    | 8336       | science | research     |                       |
    | 8906       | science | research     |                       |
    | 51         | science | research     |                       |
    | 61         | science | research     |                       |
    | 37         | science | research     |                       |
    | 3401       | science | research     |                       |
    | 3381       | science | research     |                       |
    | 68         | science | research     |                       |
    | 86         | science | research     |                       |
    | 81         | science | research     |                       |
    | 87         | science | research     |                       |
    | 88         | science | research     |                       |
    | 33         | science | research     |                       |
    | 40         | science | research     |                       |
    | 38         | science | research     |                       |
    | 2506       | science | research     |                       |
    | 42         | science | research     |                       |
    | 70         | science | research     |                       |
    | 8156       | science | research     |                       |
    | 8176       | science | research     |                       |
    | 8151       | science | research     |                       |
    | 8186       | science | research     |                       |
    | 8156       | science | research     |                       |
    | 4536       | science | research     |                       |
    | 8176       | science | research     |                       |
    | 8151       | science | research     |                       |
    | 8186       | science | research     |                       |
    | 336        | science | research     |                       |
    | 3566       | science | research     |                       |
    | 6996       | science | research     |                       |
    | 4381       | science | research     |                       |
    | 346        | science | research     |                       |
    | 7701       | science | research     |                       |
    | 3641       | science | research     |                       |
    | 5381       | science | research     |                       |
    | 4882       | science | research     |                       |
    | 6931       | science | research     |                       |
    | 5061       | science | research     |                       |
    | 6991       | science | research     |                       |
    | 7291       | science | research     |                       |
    | 4381       | science | research     |                       |
    | 391        | science | research     |                       |
    | 12406      | science | research     |                       |
    | 12391      | science | research     |                       |
    | 17576      | science | research     |                       |
    | 16871      | science | research     |                       |
    | 12411      | science | research     |                       |
    | 17571      | science | research     |                       |
    | 7551       | science | research     |                       |
    | 4271       | science | research     |                       |
    | 3661       | science | research     |                       |
    | 426        | science | research     |                       |
    | 7026       | science | research     |                       |
    | 7021       | science | research     |                       |
    | 4496       | science | research     |                       |
    | 431        | science | research     |                       |
    | 4626       | science | research     |                       |
    | 6751       | science | research     |                       |
    | 4326       | science | research     |                       |
    | 6906       | science | research     |                       |
    | 436        | science | research     |                       |
    | 7571       | science | research     |                       |
    | 7581       | science | research     |                       |
    | 7591       | science | research     |                       |
    | 7576       | science | research     |                       |
    | 7561       | science | research     |                       |
    | 7566       | science | research     |                       |
    | 6821       | science | research     |                       |
    | 7546       | science | research     |                       |
    | 7586       | science | research     |                       |
    | 441        | science | research     |                       |
    | 8206       | science | research     |                       |
    | 6816       | science | research     |                       |
    | 6801       | science | research     |                       |
    | 7016       | science | research     |                       |
    | 7011       | science | research     |                       |
    | 7021       | science | research     |                       |
    | 6706       | science | research     |                       |
    | 1371       | science | research     |                       |
    | 7296       | science | research     |                       |
    | 7301       | science | research     |                       |
    | 2766       | science | research     |                       |
    | 6851       | science | research     |                       |
    | 351        | science | research     |                       |
    | 5321       | science | research     |                       |
    | 331        | science | research     |                       |
    | 3481       | science | research     |                       |
    | 8686       | science | research     |                       |
    | 8006       | science | research     |                       |
    | 9161       | science | research     |                       |
    | 11786      | science | research     |                       |
    | 13191      | science | research     |                       |
    | 16101      | science | research     |                       |
    | 776        | science | research     |                       |
    | 901        | science | research     |                       |
    | 326        | science | research     |                       |
    | 916        | science | research     |                       |
    | 321        | science | research     |                       |
    | 3191       | science | research     |                       |
    | 3426       | science | research     |                       |
    | 3421       | science | research     |                       |
    | 8426       | science | research     |                       |
    | 8441       | science | research     |                       |
    | 3451       | science | research     |                       |
    | 776        | science | research     |                       |
    | 996        | science | research     |                       |
    | 1021       | science | research     |                       |
    | 1161       | science | research     |                       |
    | 1511       | science | research     |                       |
    | 1546       | science | research     |                       |
    | 316        | science | research     |                       |
    | 3341       | science | research     |                       |
    | 15396      | science | research     |                       |
    | 1621       | science | research     |                       |
    | 626        | science | research     |                       |
    | 721        | science | research     |                       |
    | 776        | science | research     |                       |
    | 1856       | science | research     |                       |
    | 1751       | science | research     |                       |
    | 446        | science | research     |                       |
    | 7006       | science | research     |                       |
    | 5976       | science | research     |                       |
    | 451        | science | research     |                       |
    | 466        | science | research     |                       |
    | 4877       | science | research     |                       |
    | 17456      | science | research     |                       |
    | 5941       | science | research     |                       |
    | 471        | science | research     |                       |
    | 8526       | science | research     |                       |
    | 481        | science | research     |                       |
    | 2081       | science | research     |                       |
    | 13966      | science | research     |                       |
    | 6481       | science | research     |                       |
    | 5936       | science | research     |                       |
    | 6406       | science | research     |                       |
    | 486        | science | research     |                       |
    | 1601       | science | research     |                       |
    | 491        | science | research     |                       |
    | 11701      | science | research     |                       |
    | 9111       | science | research     |                       |
    | 7301       | science | research     |                       |
    | 501        | science | research     |                       |
    | 6431       | science | research     |                       |
    | 2311       | science | research     |                       |
    | 71         | science | research     |                       |
    | 2936       | science | research     |                       |
    | 2856       | science | research     |                       |
    | 2976       | science | research     |                       |
    | 1166       | science | research     |                       |
    | 72         | science | research     |                       |
    | 3001       | science | research     |                       |
    | 8776       | science | research     |                       |
    | 8876       | science | research     |                       |
    | 8886       | science | research     |                       |
    | 8931       | science | research     |                       |
    | 8881       | science | research     |                       |
    | 8891       | science | research     |                       |
    | 11316      | science | research     |                       |
    | 8241       | science | research     |                       |
    | 8271       | science | research     |                       |
    | 5891       | science | research     |                       |
    | 4896       | science | research     |                       |
    | 1126       | science | research     |                       |
    | 1141       | science | research     |                       |
    | 1106       | science | research     |                       |
    | 73         | science | research     |                       |
    | 3321       | science | research     |                       |
    | 656        | science | research     |                       |
    | 561        | science | research     |                       |
    | 3206       | science | research     |                       |
    | 606        | science | research     |                       |
    | 701        | science | research     |                       |
    | 661        | science | research     |                       |
    | 74         | science | research     |                       |
    | 2676       | science | research     |                       |
    | 5441       | science | research     |                       |
    | 5521       | science | research     |                       |
    | 1036       | science | research     |                       |
    | 1061       | science | research     |                       |
    | 1011       | science | research     |                       |
    | 941        | science | research     |                       |
    | 966        | science | research     |                       |
    | 75         | science | research     |                       |
    | 6491       | science | research     |                       |
    | 876        | science | research     |                       |
    | 5301       | science | research     |                       |
    | 896        | science | research     |                       |
    | 856        | science | research     |                       |
    | 911        | science | research     |                       |
    | 921        | science | research     |                       |
    | 76         | science | research     |                       |
    | 11031      | science | research     |                       |
    | 3416       | science | research     |                       |
    | 2631       | science | research     |                       |
    | 17126      | science | research     |                       |
    | 3351       | science | research     |                       |
    | 10811      | science | research     |                       |
    | 10676      | science | research     |                       |
    | 10451      | science | research     |                       |
    | 10311      | science | research     |                       |
    | 10316      | science | research     |                       |
    | 10321      | science | research     |                       |
    | 10326      | science | research     |                       |
    | 10331      | science | research     |                       |
    | 10336      | science | research     |                       |
    | 10341      | science | research     |                       |
    | 10976      | science | research     |                       |
    | 10666      | science | research     |                       |
    | 10346      | science | research     |                       |
    | 2736       | science | research     |                       |
    | 17121      | science | research     |                       |
    | 5926       | science | research     |                       |
    | 2816       | science | research     |                       |
    | 5996       | science | research     |                       |
    | 786        | science | research     |                       |
    | 821        | science | research     |                       |
    | 6466       | science | research     |                       |
