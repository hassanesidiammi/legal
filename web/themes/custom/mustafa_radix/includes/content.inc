<?php
/**
 * @file
 * Theme and preprocess functions for nodes.
 */

 /**
 * Implements hook_preprocess_page() for block templates.
 */

function mustafa_radix_preprocess_page(&$variables) {
    $variables['fix_navbar'] = theme_get_setting('fix_navbar');
    // Social media global variable.
    $variables['fix_social'] = theme_get_setting('fix_social');
    $variables['phone'] = theme_get_setting('phone');
    $variables['themail'] = theme_get_setting('themail');
    $variables['show_social_icon'] = theme_get_setting('show_social_icon');
    $variables['facebook_url'] = theme_get_setting('facebook_url');
    $variables['twitter_url'] = theme_get_setting('twitter_url');
    $variables['linkedin_url'] = theme_get_setting('linkedin_url');
    $variables['instagram_url'] = theme_get_setting('instagram_url');
    $variables['rss_url'] = theme_get_setting('rss_url');
    $variables['show_credit_link'] = theme_get_setting('show_credit_link');
  
  }