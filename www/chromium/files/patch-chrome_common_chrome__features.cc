<<<<<<< HEAD
--- chrome/common/chrome_features.cc.orig	2019-12-16 21:51:24 UTC
+++ chrome/common/chrome_features.cc
@@ -86,13 +86,13 @@ const base::Feature kAutoFetchOnNetErrorPage{"AutoFetc
                                              base::FEATURE_DISABLED_BY_DEFAULT};
 #endif  // defined(OS_ANDROID)
=======
--- chrome/common/chrome_features.cc.orig	2020-03-03 18:53:53 UTC
+++ chrome/common/chrome_features.cc
@@ -81,13 +81,13 @@ const base::Feature kAsyncDns {
 #endif
 };
>>>>>>> upstream/master
 
-#if defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
 // Enables the Restart background mode optimization. When all Chrome UI is
 // closed and it goes in the background, allows to restart the browser to
 // discard memory.
 const base::Feature kBackgroundModeAllowRestart{
     "BackgroundModeAllowRestart", base::FEATURE_DISABLED_BY_DEFAULT};
-#endif  // defined(OS_WIN) || defined(OS_LINUX)
+#endif  // defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
 
 // Enables or disables whether permission prompts are automatically blocked
 // after the user has explicitly dismissed them too many times.
<<<<<<< HEAD
@@ -152,7 +152,7 @@ const base::Feature kThirdPartyModulesBlocking{
=======
@@ -147,7 +147,7 @@ const base::Feature kThirdPartyModulesBlocking{
>>>>>>> upstream/master
 const base::Feature kTLS13HardeningForLocalAnchors{
     "TLS13HardeningForLocalAnchors", base::FEATURE_DISABLED_BY_DEFAULT};
 
-#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_MACOSX)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_MACOSX) || defined(OS_BSD)
 // Enables the dual certificate verification trial feature.
 // https://crbug.com/649026
 const base::Feature kCertDualVerificationTrialFeature{
