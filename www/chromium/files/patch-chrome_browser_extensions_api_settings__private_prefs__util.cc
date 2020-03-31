<<<<<<< HEAD
--- chrome/browser/extensions/api/settings_private/prefs_util.cc.orig	2019-12-16 21:51:23 UTC
+++ chrome/browser/extensions/api/settings_private/prefs_util.cc
@@ -159,7 +159,7 @@ const PrefsUtil::TypedPrefMap& PrefsUtil::GetWhitelist
=======
--- chrome/browser/extensions/api/settings_private/prefs_util.cc.orig	2020-03-03 18:53:51 UTC
+++ chrome/browser/extensions/api/settings_private/prefs_util.cc
@@ -158,7 +158,7 @@ const PrefsUtil::TypedPrefMap& PrefsUtil::GetWhitelist
>>>>>>> upstream/master
   (*s_whitelist)[bookmarks::prefs::kShowBookmarkBar] =
       settings_api::PrefType::PREF_TYPE_BOOLEAN;
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   (*s_whitelist)[::prefs::kUseCustomChromeFrame] =
       settings_api::PrefType::PREF_TYPE_BOOLEAN;
 #endif
<<<<<<< HEAD
@@ -169,7 +169,7 @@ const PrefsUtil::TypedPrefMap& PrefsUtil::GetWhitelist
=======
@@ -168,7 +168,7 @@ const PrefsUtil::TypedPrefMap& PrefsUtil::GetWhitelist
>>>>>>> upstream/master
   // Appearance settings.
   (*s_whitelist)[::prefs::kCurrentThemeID] =
       settings_api::PrefType::PREF_TYPE_STRING;
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_BSD) || defined(OS_LINUX)) && !defined(OS_CHROMEOS)
   (*s_whitelist)[::prefs::kUsesSystemTheme] =
       settings_api::PrefType::PREF_TYPE_BOOLEAN;
 #endif
