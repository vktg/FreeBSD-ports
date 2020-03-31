<<<<<<< HEAD
--- chrome/browser/metrics/chrome_metrics_service_client.cc.orig	2019-12-16 21:51:23 UTC
+++ chrome/browser/metrics/chrome_metrics_service_client.cc
@@ -704,11 +704,11 @@ void ChromeMetricsServiceClient::RegisterMetricsServic
=======
--- chrome/browser/metrics/chrome_metrics_service_client.cc.orig	2020-03-03 18:53:51 UTC
+++ chrome/browser/metrics/chrome_metrics_service_client.cc
@@ -708,11 +708,11 @@ void ChromeMetricsServiceClient::RegisterMetricsServic
>>>>>>> upstream/master
 #endif  // defined(OS_WIN)
 
 #if defined(OS_WIN) || defined(OS_MACOSX) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   metrics_service_->RegisterMetricsProvider(
       std::make_unique<DesktopPlatformFeaturesMetricsProvider>());
 #endif  //  defined(OS_WIN) || defined(OS_MACOSX) || \
-        // (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+        // (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 
 #if BUILDFLAG(ENABLE_PLUGINS)
   plugin_metrics_provider_ = new PluginMetricsProvider(local_state);
<<<<<<< HEAD
@@ -947,7 +947,7 @@ bool ChromeMetricsServiceClient::RegisterForProfileEve
=======
@@ -955,7 +955,7 @@ bool ChromeMetricsServiceClient::RegisterForProfileEve
>>>>>>> upstream/master
   }
 #endif
 #if defined(OS_WIN) || defined(OS_MACOSX) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   // This creates the DesktopProfileSessionDurationsServices if it didn't exist
   // already.
   metrics::DesktopProfileSessionDurationsServiceFactory::GetForBrowserContext(
