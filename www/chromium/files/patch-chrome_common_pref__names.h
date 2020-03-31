<<<<<<< HEAD
--- chrome/common/pref_names.h.orig	2019-12-16 21:51:24 UTC
+++ chrome/common/pref_names.h
@@ -330,7 +330,7 @@ extern const char kHistoryMenuPromoShown[];
=======
--- chrome/common/pref_names.h.orig	2020-03-03 18:53:53 UTC
+++ chrome/common/pref_names.h
@@ -331,7 +331,7 @@ extern const char kHistoryMenuPromoShown[];
>>>>>>> upstream/master
 extern const char kForceGoogleSafeSearch[];
 extern const char kForceYouTubeRestrict[];
 extern const char kAllowedDomainsForApps[];
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
 extern const char kUsesSystemTheme[];
 #endif
 extern const char kCurrentThemePackFilename[];
<<<<<<< HEAD
@@ -361,7 +361,7 @@ extern const char kDefaultBrowserSettingEnabled[];
=======
@@ -362,7 +362,7 @@ extern const char kDefaultBrowserSettingEnabled[];
>>>>>>> upstream/master
 #if defined(OS_MACOSX)
 extern const char kShowUpdatePromotionInfoBar[];
 #endif
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
 extern const char kUseCustomChromeFrame[];
 #endif
 #if BUILDFLAG(ENABLE_PLUGINS)
<<<<<<< HEAD
@@ -523,7 +523,7 @@ extern const char kAppWindowPlacement[];
=======
@@ -527,7 +527,7 @@ extern const char kAppWindowPlacement[];
>>>>>>> upstream/master
 extern const char kDownloadDefaultDirectory[];
 extern const char kDownloadExtensionsToOpen[];
 extern const char kDownloadDirUpgraded[];
-#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_MACOSX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_BSD)
 extern const char kOpenPdfDownloadInSystemReader[];
 #endif
 #if defined(OS_ANDROID)
<<<<<<< HEAD
@@ -729,9 +729,9 @@ extern const char kGSSAPILibraryName[];
 extern const char kAuthAndroidNegotiateAccountType[];
 extern const char kAllowCrossOriginAuthPrompt[];
=======
@@ -738,9 +738,9 @@ extern const char kAllowCrossOriginAuthPrompt[];
 extern const char kGloballyScopeHTTPAuthCacheEnabled[];
 extern const char kAmbientAuthenticationInPrivateModesEnabled[];
>>>>>>> upstream/master
 
-#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 extern const char kAuthNegotiateDelegateByKdcPolicy[];
-#endif  // defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS)
+#endif  // defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 
 #if defined(OS_POSIX)
 extern const char kNtlmV2Enabled[];
