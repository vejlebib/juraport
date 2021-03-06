core = 7.x
api = 2

; libraries
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.4.7/ckeditor_4.4.7_full.zip
libraries[ckeditor][directory_name] = "ckeditor"

; Contrib
projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = "3.0-rc4"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.4"

projects[features][subdir] = "contrib"
projects[features][version] = "2.2"

projects[metatag][subdir] = "contrib"
projects[metatag][version] = "1.4"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[transliteration][subdir] = "contrib"
projects[transliteration][version] = "3.2"

projects[jquery_update][subdir] = "contrib"
projects[jquery_update][version] = "2.4"

projects[secure_permissions][subdir] = "contrib"
projects[secure_permissions][version] = "1.6"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.2"

projects[field_collection][subdir] = "contrib"
projects[field_collection][version] = "1.0-beta7"
; https://www.drupal.org/node/2109627 Disable pathauto when saving field collection inline
projects[field_collection][patch][0] = https://www.drupal.org/files/issues/2109627-edit-to-field-collection-item-alters-generate-automatic-url-alias-setting-for-node.patch

projects[field_group][subdir] = "contrib"
projects[field_group][version] = "1.4"

projects[link][subdir] = "contrib"
projects[link][version] = "1.3"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.5"

projects[profile2][subdir] = "contrib"
projects[profile2][version] = "1.3"

projects[entityreference][subdir] = "contrib"
projects[entityreference][version] = "1.1"

projects[diff][subdir] = "contrib"
projects[diff][version] = "3.2"

projects[module_filter][subdir] = "contrib"
projects[module_filter][version] = "2.0-alpha2"

projects[redirect][subdir] = "contrib"
projects[redirect][version] = "1.0-rc1"

projects[token][subdir] = "contrib"
projects[token][version] = "1.5"

projects[panels][subdir]= "contrib"
projects[panels][version] = "3.4"

projects[views][subdir] = "contrib"
projects[views][version] = "3.8"

projects[backup_migrate][subdir] = "contrib"
projects[backup_migrate][version] = "3.0"

projects[uuid][subdir] = "contrib"
projects[uuid][version] = "1.0-alpha6"

projects[elements][subdir] = "contrib"
projects[elements][version] = "1.4"

projects[features_extra][subdir] = "contrib"
projects[features_extra][version] = "1.0-beta1"

projects[l10n_update][subdir] = "contrib"
projects[l10n_update][version] = "2.0"

projects[similarterms][subdir] = "contrib"
projects[similarterms][version] = "2.3"

projects[views_bulk_operations][subdir] = "contrib"
projects[views_bulk_operations][version] = "3.2"

projects[admin_views][subdir] = "contrib"
projects[admin_views][version] = "1.4"

projects[linkchecker][subdir] = "contrib"
projects[linkchecker][version] = "1.2"
; Allows linkchecker to search embedded field collections for bad links.
projects[linkchecker][patch][0] = https://www.drupal.org/files/issues/field-collection-compatibility-1888102-8.patch

; This revision support the CKEditor 4.x, and can be used until a new version is tagged.
projects[wysiwyg][type] = "module"
projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][download][type] = "git"
projects[wysiwyg][download][url] = "http://git.drupal.org/project/wysiwyg.git"
projects[wysiwyg][download][revision] = "7981731f4f3db2f932419499d2ec13a073e9b88f"

projects[file_entity][subdir] = "contrib"
projects[file_entity][version] = "2.0-beta3"

projects[media][subdir] = "contrib"
projects[media][version] = "2.0-beta2"

projects[linkit][subdir] = "contrib"
projects[linkit][version] = "3.5"

projects[globalredirect][subdir] = "contrib"
projects[globalredirect][version] = "1.5"

projects[magic][subdir] = "contrib"
projects[magic][version] = "2.2"

projects[fb_social][subdir] = "contrib"
projects[fb_social][version] = "2.0-beta4"

; Base theme
projects[zen][type] = "theme"
projects[zen][version] = "5.5"
