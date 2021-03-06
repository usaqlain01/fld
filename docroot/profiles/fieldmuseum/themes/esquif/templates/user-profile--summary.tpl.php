<?php

/**
 * @file
 * Default theme implementation to present all user profile data.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 * Use render($user_profile) to print all profile items, or print a subset
 * such as render($user_profile['user_picture']). Always call
 * render($user_profile) at the end in order to print all remaining items. If
 * the item is a category, it will contain all its profile items. By default,
 * $user_profile['summary'] is provided, which contains data on the user's
 * history. Other data can be included by modules. $user_profile['user_picture']
 * is available for showing the account picture.
 *
 * Available variables:
 *   - $user_profile: An array of profile items. Use render() to print them.
 *   - Field variables: for each field instance attached to the user a
 *     corresponding variable is defined; e.g., $account->field_example has a
 *     variable $field_example defined. When needing to access a field's raw
 *     values, developers/themers are strongly encouraged to use these
 *     variables. Otherwise they will have to explicitly specify the desired
 *     field language, e.g. $account->field_example['en'], thus overriding any
 *     language negotiation rule that was previously applied.
 *
 * @see user-profile-category.tpl.php
 *   Where the html is handled for the group.
 * @see user-profile-item.tpl.php
 *   Where the html is handled for each item in the group.
 * @see template_preprocess_user_profile()
 *
 * @ingroup themeable
 */
?>
<section class="personSummary <?php print $classes; ?>" <?php print $attributes; ?>>
  <figure class="personSummary__image">
    <?php if (isset($url)): ?><a href="<?php print $url; ?>"><?php endif; ?>
      <?php print render($user_profile['user_picture']); ?>
    <?php if (isset($url)): ?></a><?php endif; ?>
  </figure>
  <figcaption class="person__details">
    <h3 class="person__name"<?php print $title_attributes; ?>>
      <?php if (isset($url)): ?><a itemprop="url" href="<?php print $url; ?>"><?php endif; ?><?php print render($user_profile['field_givenname']); ?> <?php print render($user_profile['field_surname']); ?><?php if (isset($url)): ?></a><?php endif; ?>
    </h3>
    <h6 class="person__title" itemprop="jobTitle">
      <?php print render($user_profile['field_position']); ?>
    </h6>
    <h6 class="person__department">
      <?php print render($user_profile['field_home_department']); ?>
      <?php if ($user_profile['field_business_unit'] && $user_profile['field_business_unit']['#items'] !== $user_profile['field_home_department']['#items']) { ?>
        (<?php print trim(render($user_profile['field_business_unit'])); ?>)
      <?php } ?>
    </h6>
  </figcaption>
</section>
