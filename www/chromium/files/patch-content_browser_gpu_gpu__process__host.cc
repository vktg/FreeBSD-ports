<<<<<<< HEAD
--- content/browser/gpu/gpu_process_host.cc.orig	2019-12-16 21:51:26 UTC
+++ content/browser/gpu/gpu_process_host.cc
@@ -1087,7 +1087,7 @@ bool GpuProcessHost::LaunchGpuProcess() {
=======
--- content/browser/gpu/gpu_process_host.cc.orig	2020-03-03 18:53:54 UTC
+++ content/browser/gpu/gpu_process_host.cc
@@ -1039,7 +1039,7 @@ bool GpuProcessHost::LaunchGpuProcess() {
>>>>>>> upstream/master
   std::unique_ptr<base::CommandLine> cmd_line =
       std::make_unique<base::CommandLine>(base::CommandLine::NO_PROGRAM);
 #else
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   int child_flags = gpu_launcher.empty() ? ChildProcessHost::CHILD_ALLOW_SELF
                                          : ChildProcessHost::CHILD_NORMAL;
 #elif defined(OS_MACOSX)
