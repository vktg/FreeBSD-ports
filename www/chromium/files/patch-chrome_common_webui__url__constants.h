<<<<<<< HEAD
--- chrome/common/webui_url_constants.h.orig	2019-12-16 21:51:24 UTC
+++ chrome/common/webui_url_constants.h
@@ -268,7 +268,7 @@ bool IsSystemWebUIHost(base::StringPiece host);
=======
--- chrome/common/webui_url_constants.h.orig	2020-03-03 18:53:53 UTC
+++ chrome/common/webui_url_constants.h
@@ -274,7 +274,7 @@ bool IsSystemWebUIHost(base::StringPiece host);
>>>>>>> upstream/master
 extern const char kChromeUICastHost[];
 #endif
 
-#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
 extern const char kChromeUIDiscardsHost[];
 extern const char kChromeUIDiscardsURL[];
 extern const char kChromeUIHatsHost[];
<<<<<<< HEAD
@@ -280,17 +280,17 @@ extern const char kChromeUIHatsURL[];
=======
@@ -286,17 +286,17 @@ extern const char kChromeUIHatsURL[];
>>>>>>> upstream/master
 extern const char kChromeUILinuxProxyConfigHost[];
 #endif
 
-#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_ANDROID)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_ANDROID) || defined(OS_BSD)
 extern const char kChromeUISandboxHost[];
 #endif
 
 #if defined(OS_WIN) || defined(OS_MACOSX) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 extern const char kChromeUIBrowserSwitchHost[];
 extern const char kChromeUIBrowserSwitchURL[];
 #endif
 
-#if (defined(OS_LINUX) && defined(TOOLKIT_VIEWS)) || defined(USE_AURA)
+#if ((defined(OS_LINUX) || defined(OS_BSD)) && defined(TOOLKIT_VIEWS)) || defined(USE_AURA)
 extern const char kChromeUITabModalConfirmDialogHost[];
 #endif
 
