<<<<<<< HEAD
--- components/viz/host/host_display_client.cc.orig	2019-12-17 19:29:17 UTC
+++ components/viz/host/host_display_client.cc
@@ -59,7 +59,7 @@ void HostDisplayClient::CreateLayeredWindowUpdater(
=======
--- components/viz/host/host_display_client.cc.orig	2020-03-03 18:53:07 UTC
+++ components/viz/host/host_display_client.cc
@@ -56,7 +56,7 @@ void HostDisplayClient::CreateLayeredWindowUpdater(
>>>>>>> upstream/master
 }
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 void HostDisplayClient::DidCompleteSwapWithNewSize(const gfx::Size& size) {
   NOTIMPLEMENTED();
 }
