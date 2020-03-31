<<<<<<< HEAD
--- content/browser/compositor/gpu_process_transport_factory.cc.orig	2019-12-17 19:32:45 UTC
+++ content/browser/compositor/gpu_process_transport_factory.cc
@@ -114,7 +114,7 @@ viz::FrameSinkManagerImpl* GetFrameSinkManager() {
=======
--- content/browser/compositor/gpu_process_transport_factory.cc.orig	2020-03-03 18:53:54 UTC
+++ content/browser/compositor/gpu_process_transport_factory.cc
@@ -115,7 +115,7 @@ viz::FrameSinkManagerImpl* GetFrameSinkManager() {
>>>>>>> upstream/master
   return content::BrowserMainLoop::GetInstance()->GetFrameSinkManager();
 }
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 class HostDisplayClient : public viz::HostDisplayClient {
  public:
   explicit HostDisplayClient(ui::Compositor* compositor)
