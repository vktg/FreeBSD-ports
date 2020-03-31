<<<<<<< HEAD
--- chrome/common/chrome_features.h.orig	2019-12-16 21:51:24 UTC
+++ chrome/common/chrome_features.h
@@ -67,10 +67,10 @@ COMPONENT_EXPORT(CHROME_FEATURES)
 extern const base::Feature kAutoFetchOnNetErrorPage;
 #endif
=======
--- chrome/common/chrome_features.h.orig	2020-03-03 18:53:53 UTC
+++ chrome/common/chrome_features.h
@@ -62,10 +62,10 @@ extern const base::Feature kAppServiceShelf;
 
 COMPONENT_EXPORT(CHROME_FEATURES) extern const base::Feature kAsyncDns;
>>>>>>> upstream/master
 
-#if defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
 COMPONENT_EXPORT(CHROME_FEATURES)
 extern const base::Feature kBackgroundModeAllowRestart;
-#endif  // defined(OS_WIN) || defined(OS_LINUX)
+#endif  // defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
 
 COMPONENT_EXPORT(CHROME_FEATURES)
 extern const base::Feature kBlockPromptsIfDismissedOften;
<<<<<<< HEAD
@@ -89,7 +89,7 @@ extern const base::Feature kBundledConnectionHelpFeatu
=======
@@ -84,7 +84,7 @@ extern const base::Feature kBundledConnectionHelpFeatu
>>>>>>> upstream/master
 COMPONENT_EXPORT(CHROME_FEATURES)
 extern const base::Feature kCaptionSettings;
 
-#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_MACOSX)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_MACOSX) || defined(OS_BSD)
 COMPONENT_EXPORT(CHROME_FEATURES)
 extern const base::Feature kCertDualVerificationTrialFeature;
 #endif
