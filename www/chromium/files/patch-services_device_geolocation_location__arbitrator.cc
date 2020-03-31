<<<<<<< HEAD
--- services/device/geolocation/location_arbitrator.cc.orig	2019-12-16 21:51:27 UTC
=======
--- services/device/geolocation/location_arbitrator.cc.orig	2020-03-03 18:53:55 UTC
>>>>>>> upstream/master
+++ services/device/geolocation/location_arbitrator.cc
@@ -157,7 +157,7 @@ LocationArbitrator::NewNetworkLocationProvider(
 
 std::unique_ptr<LocationProvider>
 LocationArbitrator::NewSystemLocationProvider() {
-#if defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_FUCHSIA)
+#if defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_FUCHSIA) || defined(OS_BSD)
   return nullptr;
 #else
   return device::NewSystemLocationProvider();
