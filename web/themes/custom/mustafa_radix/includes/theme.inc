<?php

/**
 * @file
 * Custom theme hooks.
 */


/**
 * Implements hook_form_system_theme_settings_alter().
 */
function mustafa_radix_form_system_theme_settings_alter(&$form, \Drupal\Core\Form\FormStateInterface $form_state) {
    $form['mustafa_radix_info'] = [
      '#markup' => '<h2><br/>Advanced Theme Settings</h2><div class="messages messages--warning">'.
                   'Clear cache after making any changes in theme settings. '.
                   '<a href="../../config/development/performance">Click here to clear cache</a></div>'
    ];
  
    //Navbvar
    $form['mustafa_radix_settings']['navbar'] = [
      '#type' => 'details',
      '#title' => t('Navbar'),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    ];
    $form['mustafa_radix_settings']['navbar']['fix_navbar'] = [
        '#type' => 'checkbox',
        '#title' => t('Fix navbar'),
        '#default_value' => theme_get_setting('fix_navbar'),
    ];
  
    //Social Icon Link
    $form['mustafa_radix_settings']['social_icon'] = [
      '#type' => 'details',
      '#title' => t('Social Media Link'),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    ];
    $form['mustafa_radix_settings']['social_icon']['show_social_icon'] = [
        '#type' => 'checkbox',
        '#title' => t('Show Social Icons'),
        '#default_value' => theme_get_setting('show_social_icon'),
        '#description'   => t("Show/Hide Social media links"),
    ];
    $form['mustafa_radix_settings']['social_icon']['fix_social'] = [
        '#type' => 'checkbox',
        '#title' => t('Fix Social Icons bar'),
        '#default_value' => theme_get_setting('fix_social'),
    ];
    $form['mustafa_radix_settings']['social_icon']['phone'] = array(
      '#type' => 'textfield',
      '#title' => t('Phone number'),
      '#default_value' => theme_get_setting('phone'),
    );
    $form['mustafa_radix_settings']['social_icon']['themail'] = array(
      '#type' => 'textfield',
      '#title' => t('Mail'),
      '#default_value' => theme_get_setting('themail'),
    );
    $form['mustafa_radix_settings']['social_icon']['facebook_url'] = array(
      '#type' => 'textfield',
      '#title' => t('Facebook URL'),
      '#default_value' => theme_get_setting('facebook_url'),
    );
    $form['mustafa_radix_settings']['social_icon']['twitter_url'] = [
        '#type' => 'textfield',
        '#title' => t('Twitter URL'),
        '#default_value' => theme_get_setting('twitter_url'),
    ];
    $form['mustafa_radix_settings']['social_icon']['linkedin_url'] = [
      '#type' => 'textfield',
      '#title' => t('LinkedIn URL'),
      '#default_value' => theme_get_setting('linkedin_url'),
    ];
    $form['mustafa_radix_settings']['social_icon']['instagram_url'] = [
        '#type' => 'textfield',
        '#title' => t('Instagram URL'),
        '#default_value' => theme_get_setting('instagram_url'),
    ];
    $form['mustafa_radix_settings']['social_icon']['rss_url'] = [
        '#type' => 'textfield',
        '#title' => t('RSS URL'),
        '#default_value' => theme_get_setting('rss_url'),
    ];
  
    //Show/Hide credit
    $form['mustafa_radix_settings']['credit_link'] = [
        '#type' => 'details',
        '#title' => t('Footer Credit Link'),
        '#collapsible' => TRUE,
        '#collapsed' => FALSE,
    ];
    $form['mustafa_radix_settings']['credit_link']['show_credit_link'] = [
        '#type' => 'checkbox',
        '#title' => t("Show/Hide 'Designed by Hassane SIDIAMMI' credit text"),
        '#default_value' => theme_get_setting('show_credit_link'),
        '#description'   => t("Highly recommend to display credit in footer"),
    ];
  }
