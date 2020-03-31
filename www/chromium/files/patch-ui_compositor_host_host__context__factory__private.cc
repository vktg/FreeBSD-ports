<<<<<<< HEAD
--- ui/compositor/host/host_context_factory_private.cc.orig	2019-12-17 19:57:59 UTC
+++ ui/compositor/host/host_context_factory_private.cc
@@ -31,7 +31,7 @@ namespace {
=======
--- ui/compositor/host/host_context_factory_private.cc.orig	2020-03-03 18:54:06 UTC
+++ ui/compositor/host/host_context_factory_private.cc
@@ -30,7 +30,7 @@ namespace {
>>>>>>> upstream/master
 
 static const char* kBrowser = "Browser";
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 class HostDisplayClient : public viz::HostDisplayClient {
  public:
   explicit HostDisplayClient(ui::Compositor* compositor)
