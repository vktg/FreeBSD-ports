<<<<<<< HEAD
--- chrome/browser/prefs/browser_prefs.cc.orig	2019-12-16 21:51:23 UTC
=======
--- chrome/browser/prefs/browser_prefs.cc.orig	2020-03-03 18:53:51 UTC
>>>>>>> upstream/master
+++ chrome/browser/prefs/browser_prefs.cc
@@ -352,7 +352,7 @@
 #endif
 
 #if defined(OS_WIN) || defined(OS_MACOSX) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 #include "chrome/browser/browser_switcher/browser_switcher_prefs.h"
 #endif
 
<<<<<<< HEAD
@@ -978,7 +978,7 @@ void RegisterProfilePrefs(user_prefs::PrefRegistrySync
=======
@@ -1005,7 +1005,7 @@ void RegisterProfilePrefs(user_prefs::PrefRegistrySync
>>>>>>> upstream/master
 #endif
 
 #if defined(OS_WIN) || defined(OS_MACOSX) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   browser_switcher::BrowserSwitcherPrefs::RegisterProfilePrefs(registry);
 #endif
 
