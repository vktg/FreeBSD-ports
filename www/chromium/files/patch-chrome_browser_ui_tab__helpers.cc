<<<<<<< HEAD
--- chrome/browser/ui/tab_helpers.cc.orig	2019-12-16 21:51:24 UTC
+++ chrome/browser/ui/tab_helpers.cc
@@ -122,7 +122,7 @@
=======
--- chrome/browser/ui/tab_helpers.cc.orig	2020-03-03 18:53:52 UTC
+++ chrome/browser/ui/tab_helpers.cc
@@ -124,7 +124,7 @@
>>>>>>> upstream/master
 #include "components/zoom/zoom_controller.h"
 #endif  // defined(OS_ANDROID)
 
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
 #include "chrome/browser/ui/blocked_content/framebust_block_tab_helper.h"
 #include "chrome/browser/ui/hats/hats_helper.h"
 #endif
<<<<<<< HEAD
@@ -314,11 +314,11 @@ void TabHelpers::AttachTabHelpers(WebContents* web_con
=======
@@ -329,11 +329,11 @@ void TabHelpers::AttachTabHelpers(WebContents* web_con
>>>>>>> upstream/master
 #endif
 
 #if defined(OS_WIN) || defined(OS_MACOSX) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   metrics::DesktopSessionDurationObserver::CreateForWebContents(web_contents);
 #endif
 
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
   if (base::FeatureList::IsEnabled(
           features::kHappinessTrackingSurveysForDesktop) ||
       base::FeatureList::IsEnabled(
