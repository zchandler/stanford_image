<?php
/***
 *  Postcard Layout
 *  See: http://drupal.org/node/1098068
 */
function ds_stanford_postcard() {
  return array(
    'label' => t('Stanford Postcard'),
    'regions' => array(
      'postcard_image' => t('Postcard Image'),
      'postcard_content'=> t('Postcard Content')
    ),
    // Add this line if there is a default css file.
    'css' => FALSE,
  );
}
?>
