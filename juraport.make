core = 7.x
api = 2

; libraries
libraries[profiler][download][type] = "get"
libraries[profiler][download][url] = "http://ftp.drupal.org/files/projects/profiler-7.x-2.0-beta2.tar.gz"

; Contrib
projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = "3.0-rc4"

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

; Base theme
projects[zen][type] = "theme"
projects[zen][version] = "5.5"

; Juraport theme
projects[juraport_theme][type] = "theme"
projects[juraport_theme][download][type] = "git"
projects[juraport_theme][download][url] = "https://github.com/vejlebib/juraport_theme.git"
projects[juraport_theme][download][tag] = "7.x-0.1.0"

; Juraport modules
projects[juraport_base][type] = "module"
projects[juraport_base][download][type] = "git"
projects[juraport_base][download][url] = "https://github.com/vejlebib/juraport_base.git"
projects[juraport_base][download][tag] = "7.x-0.1.0"

projects[juraport_jura_subject][type] = "module"
projects[juraport_jura_subject][download][type] = "git"
projects[juraport_jura_subject][download][url] = "https://github.com/vejlebib/juraport_jura_subject.git"
projects[juraport_jura_subject][download][tag] = "7.x-0.1.0"

projects[juraport_user][type] = "module"
projects[juraport_user][download][type] = "git"
projects[juraport_user][download][url] = "https://github.com/vejlebib/juraport_user.git"
projects[juraport_user][download][tag] = "7.x-0.1.0"
