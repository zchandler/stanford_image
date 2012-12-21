<?php
/****************************************************************/
/**
 * @file
 * Display Suite Stanford Postcard template.
 */
?>
<?php

?>
<div class="ds-s-postcard postcard-left-wrap <?php print $classes;?> clearfix <?php print $ds_content_classes;?>">
<?php 
  //print ("\nDebug: in themes/open_framework/ds_layouts/stanford_postcard/stanford-postcard.tpl.php\nClasses:  ");
  //print_r ($classes);
?>
  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
        
  <?php print $postcard; ?>
  <?php if ($postcard_image): ?>
    <div class="postcard_image<?php print $postcard_image_classes; ?>">
      <?php print $postcard_image; ?>
    </div>
  <?php endif; ?>

  <?php if ($postcard_content): ?>
    <div class="postcard_content<?php print $postcard_content_classes; ?>">
      <?php print $postcard_content; ?>
      <p>Foo</p>
    </div>
  <?php endif; ?>

</div>

