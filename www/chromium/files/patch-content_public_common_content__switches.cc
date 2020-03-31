<<<<<<< HEAD
--- content/public/common/content_switches.cc.orig	2019-12-16 21:51:26 UTC
+++ content/public/common/content_switches.cc
@@ -976,7 +976,7 @@ const char kEnableAggressiveDOMStorageFlushing[] =
=======
--- content/public/common/content_switches.cc.orig	2020-03-03 18:53:54 UTC
+++ content/public/common/content_switches.cc
@@ -981,7 +981,7 @@ const char kEnableAggressiveDOMStorageFlushing[] =
>>>>>>> upstream/master
 // Enable indication that browser is controlled by automation.
 const char kEnableAutomation[] = "enable-automation";
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_FREEBSD)
 // Allows sending text-to-speech requests to speech-dispatcher, a common
 // Linux speech service. Because it's buggy, the user must explicitly
 // enable it so that visiting a random webpage can't cause instability.
