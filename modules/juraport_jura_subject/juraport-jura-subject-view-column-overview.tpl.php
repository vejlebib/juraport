<?php

/**
 * @file
 *
 * Default view template for the Juraport jura subject's 'column overview'
 * Views style plugin.
 *
 * $has_groups: A variable passed on from the style plugin indicating whether
 * or not the view being renderes has grouping.
 * $columns: The columns of this column overview. These will be filled with
 * groups of rows if $has_groups is TRUE or just rows if $has_group is FALSE.
 */

?>

<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<div class="jura-subject-overview <?php print $classes; ?> clearfix">
	<?php foreach ($columns as $columns_class => $column): ?>
		<div class="jura-subject-overview-column <?php print $columns_class; ?>">
			<?php if ($has_groups): ?>
				<?php foreach ($column['rows'] as $group): ?>
					<div class="jura-subject-overview-list">
						<h2><?php print $group['group']; ?></h2>
						<ul>
							<?php foreach ($group['rows'] as $row): ?>
								<li class="jura-subject-overview-row"><?php print $row; ?></li>
							<?php endforeach; ?>
						</ul>
					</div>
				<?php endforeach; ?>
			<?php else: ?>
				<ul>
					<?php foreach ($column['rows'] as $row): ?>
						<li class="jura-subject-overview-row"><?php print $row; ?></li>
					<?php endforeach; ?>
				</ul>
			<?php endif; ?>
		</div>
	<?php endforeach; ?>
</div>
