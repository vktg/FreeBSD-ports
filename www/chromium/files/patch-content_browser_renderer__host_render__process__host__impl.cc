<<<<<<< HEAD
--- content/browser/renderer_host/render_process_host_impl.cc.orig	2019-12-16 21:51:26 UTC
+++ content/browser/renderer_host/render_process_host_impl.cc
@@ -238,7 +238,7 @@
=======
--- content/browser/renderer_host/render_process_host_impl.cc.orig	2020-03-03 18:53:54 UTC
+++ content/browser/renderer_host/render_process_host_impl.cc
@@ -243,7 +243,7 @@
>>>>>>> upstream/master
 #include "content/browser/gpu/gpu_data_manager_impl.h"
 #endif
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include <sys/resource.h>
 #include <sys/time.h>
 
<<<<<<< HEAD
@@ -1160,7 +1160,7 @@ static constexpr size_t kUnknownPlatformProcessLimit =
=======
@@ -1170,7 +1170,7 @@ static constexpr size_t kUnknownPlatformProcessLimit =
>>>>>>> upstream/master
 // to indicate failure and std::numeric_limits<size_t>::max() to indicate
 // unlimited.
 size_t GetPlatformProcessLimit() {
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   struct rlimit limit;
   if (getrlimit(RLIMIT_NPROC, &limit) != 0)
     return kUnknownPlatformProcessLimit;
<<<<<<< HEAD
@@ -1171,7 +1171,7 @@ size_t GetPlatformProcessLimit() {
=======
@@ -1181,7 +1181,7 @@ size_t GetPlatformProcessLimit() {
>>>>>>> upstream/master
 #else
   // TODO(https://crbug.com/104689): Implement on other platforms.
   return kUnknownPlatformProcessLimit;
-#endif  // defined(OS_LINUX)
+#endif  // defined(OS_LINUX) || defined(OS_BSD)
 }
 #endif  // !defined(OS_ANDROID) && !defined(OS_CHROMEOS)
 
<<<<<<< HEAD
@@ -1219,7 +1219,7 @@ class RenderProcessHostImpl::IOThreadHostImpl
=======
@@ -1229,7 +1229,7 @@ class RenderProcessHostImpl::IOThreadHostImpl
>>>>>>> upstream/master
         return;
     }
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
     if (auto font_receiver = receiver.As<font_service::mojom::FontService>()) {
       ConnectToFontService(std::move(font_receiver));
       return;
<<<<<<< HEAD
@@ -1597,7 +1597,7 @@ bool RenderProcessHostImpl::Init() {
=======
@@ -1628,7 +1628,7 @@ bool RenderProcessHostImpl::Init() {
>>>>>>> upstream/master
   renderer_prefix =
       browser_command_line.GetSwitchValueNative(switches::kRendererCmdPrefix);
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   int flags = renderer_prefix.empty() ? ChildProcessHost::CHILD_ALLOW_SELF
                                       : ChildProcessHost::CHILD_NORMAL;
 #elif defined(OS_MACOSX)
