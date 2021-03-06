<<<<<<< HEAD
--- chrome/browser/ui/webui/settings/settings_localized_strings_provider.cc.orig	2019-12-16 21:51:24 UTC
+++ chrome/browser/ui/webui/settings/settings_localized_strings_provider.cc
@@ -698,7 +698,7 @@ void AddAppearanceStrings(content::WebUIDataSource* ht
=======
--- chrome/browser/ui/webui/settings/settings_localized_strings_provider.cc.orig	2020-03-03 18:53:52 UTC
+++ chrome/browser/ui/webui/settings/settings_localized_strings_provider.cc
@@ -752,7 +752,7 @@ void AddAppearanceStrings(content::WebUIDataSource* ht
>>>>>>> upstream/master
     {"enterCustomWebAddress", IDS_SETTINGS_ENTER_CUSTOM_WEB_ADDRESS},
     {"homeButtonDisabled", IDS_SETTINGS_HOME_BUTTON_DISABLED},
     {"themes", IDS_SETTINGS_THEMES},
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
     {"systemTheme", IDS_SETTINGS_SYSTEM_THEME},
     {"useSystemTheme", IDS_SETTINGS_USE_SYSTEM_THEME},
     {"classicTheme", IDS_SETTINGS_CLASSIC_THEME},
<<<<<<< HEAD
@@ -718,7 +718,7 @@ void AddAppearanceStrings(content::WebUIDataSource* ht
=======
@@ -772,7 +772,7 @@ void AddAppearanceStrings(content::WebUIDataSource* ht
>>>>>>> upstream/master
     {"openWallpaperApp", IDS_OS_SETTINGS_OPEN_WALLPAPER_APP},
     {"setWallpaper", IDS_OS_SETTINGS_SET_WALLPAPER},
 #endif
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
     {"showWindowDecorations", IDS_SHOW_WINDOW_DECORATIONS},
 #endif
 #if defined(OS_MACOSX)
