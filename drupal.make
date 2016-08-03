core = 7.x
api = 2

; Core
projects[drupal][type] = core
projects[drupal][version] = 7.50
projects[drupal][download][type] = get
projects[drupal][download][url] = http://ftp.drupal.org/files/projects/drupal-7.50.tar.gz
projects[drupal][patch][] = https://drupal.org/files/issues/drupal_alerts_an_ajax-1232416-274.patch
projects[drupal][patch][] = http://drupal.org/files/issues/translate_role_names-2205581-1.patch

; Get the profile, which will contain the next makefile.
projects[juraport][type] = "profile"
projects[juraport][download][type] = "git"
projects[juraport][download][url] = "git@github.com:vejlebib/juraport.git"
projects[juraport][download][branch] = "master"
