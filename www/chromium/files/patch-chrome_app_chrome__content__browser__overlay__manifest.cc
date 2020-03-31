<<<<<<< HEAD
--- chrome/app/chrome_content_browser_overlay_manifest.cc.orig	2019-12-16 21:51:22 UTC
+++ chrome/app/chrome_content_browser_overlay_manifest.cc
@@ -70,7 +70,7 @@
=======
--- chrome/app/chrome_content_browser_overlay_manifest.cc.orig	2020-03-03 18:53:48 UTC
+++ chrome/app/chrome_content_browser_overlay_manifest.cc
@@ -60,7 +60,7 @@
>>>>>>> upstream/master
 #include "chrome/browser/ui/webui/app_management/app_management.mojom.h"
 #endif
 
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || \
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD) || \
     defined(OS_CHROMEOS)
 #include "chrome/browser/ui/webui/discards/discards.mojom.h"
 #endif
<<<<<<< HEAD
@@ -189,7 +189,7 @@ const service_manager::Manifest& GetChromeContentBrows
=======
@@ -145,7 +145,7 @@ const service_manager::Manifest& GetChromeContentBrows
>>>>>>> upstream/master
 #else
                 app_management::mojom::PageHandlerFactory,
 #endif
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || \
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD) || \
     defined(OS_CHROMEOS)
                 discards::mojom::DetailsProvider, discards::mojom::GraphDump,
 #endif
