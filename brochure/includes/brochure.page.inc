<?php

/**
 * @file
 * brochure Pages
 */

/**
 * Settings form.
 */
function brochure_settings_form($form, &$form_state) {
  // General API settings
  $form['api'] = array(
    '#type' => 'fieldset',
    '#title' => t('brochure Set Mail'),
    '#description' => t(''),
  );
  $form['brochure_email'] = array(
    '#type' => 'textfield',
    '#title' => t('Email ID'),
    '#default_value' => variable_get('brochure_email', ''),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}


function brochure($node) {

        drupal_add_js('https://ajax.googleapis.com/ajax/libs/angularjs/1.2.19/angular.min.js', array('weight' => '64'));
        drupal_add_js('http://angular-ui.github.io/bootstrap/ui-bootstrap-tpls-0.10.0.min.js', array('weight' => '65'));
        
        drupal_add_js(drupal_get_path('module', 'brochure') . '/js/app.js', array('weight' => '65'));
        drupal_add_css(drupal_get_path('module','brochure'). '/css/brochure.css', array('weight' => '66'));
       
    return theme('brochure',array('node' => $node));
}

function brochure_download($event_id){
        global $base_url;
        $file = $base_url.'/sites/default/files/Unlimited Pizza.pdf';
       
        header('Content-Type: application/pdf');
        header("Content-Disposition: attachment; filename=\"$file\"");
        header('Content-Length: ' . filesize($file));
        readfile($file);
}



?>
