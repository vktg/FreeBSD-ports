<<<<<<< HEAD
--- content/public/common/content_features.cc.orig	2019-12-16 21:51:26 UTC
+++ content/public/common/content_features.cc
@@ -53,7 +53,7 @@ const base::Feature kAudioServiceLaunchOnStartup{
=======
--- content/public/common/content_features.cc.orig	2020-03-03 18:53:54 UTC
+++ content/public/common/content_features.cc
@@ -48,7 +48,7 @@ const base::Feature kAudioServiceLaunchOnStartup{
>>>>>>> upstream/master
 const base::Feature kAudioServiceOutOfProcess{
   "AudioServiceOutOfProcess",
 #if defined(OS_WIN) || defined(OS_MACOSX) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
       base::FEATURE_ENABLED_BY_DEFAULT
 #else
       base::FEATURE_DISABLED_BY_DEFAULT
<<<<<<< HEAD
@@ -628,7 +628,7 @@ const base::Feature kWebAssemblyThreads {
=======
@@ -622,7 +622,7 @@ const base::Feature kWebAssemblyThreads {
>>>>>>> upstream/master
 };
 
 // Enable WebAssembly trap handler.
-#if (defined(OS_LINUX) || defined(OS_WIN) || defined(OS_MACOSX)) && \
+#if (defined(OS_BSD) || defined(OS_LINUX) || defined(OS_WIN) || defined(OS_MACOSX)) && \
     defined(ARCH_CPU_X86_64)
 const base::Feature kWebAssemblyTrapHandler{"WebAssemblyTrapHandler",
                                             base::FEATURE_ENABLED_BY_DEFAULT};
<<<<<<< HEAD
@@ -663,7 +663,7 @@ const base::Feature kWebAuthBle{"WebAuthenticationBle"
=======
@@ -657,7 +657,7 @@ const base::Feature kWebAuthBle{"WebAuthenticationBle"
>>>>>>> upstream/master
 // https://w3c.github.io/webauthn
 const base::Feature kWebAuthCable {
   "WebAuthenticationCable",
-#if !defined(OS_CHROMEOS) && defined(OS_LINUX)
+#if (!defined(OS_CHROMEOS) && defined(OS_LINUX)) || defined(OS_BSD)
       base::FEATURE_DISABLED_BY_DEFAULT
 #else
       base::FEATURE_ENABLED_BY_DEFAULT
