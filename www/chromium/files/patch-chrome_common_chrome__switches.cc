<<<<<<< HEAD
--- chrome/common/chrome_switches.cc.orig	2019-12-16 21:51:24 UTC
+++ chrome/common/chrome_switches.cc
@@ -852,7 +852,7 @@ const char kAllowNaClFileHandleAPI[]        = "allow-n
=======
--- chrome/common/chrome_switches.cc.orig	2020-03-03 18:53:53 UTC
+++ chrome/common/chrome_switches.cc
@@ -868,7 +868,7 @@ const char kAllowNaClFileHandleAPI[]        = "allow-n
>>>>>>> upstream/master
 const char kAllowNaClSocketAPI[]            = "allow-nacl-socket-api";
 #endif
 
-#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_WIN)
+#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_WIN) || defined(OS_BSD)
 const char kEnableNewAppMenuIcon[] = "enable-new-app-menu-icon";
 
 // Causes the browser to launch directly in guest mode.
