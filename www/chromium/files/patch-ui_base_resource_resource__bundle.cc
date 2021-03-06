<<<<<<< HEAD
--- ui/base/resource/resource_bundle.cc.orig	2019-12-16 21:51:33 UTC
+++ ui/base/resource/resource_bundle.cc
@@ -818,7 +818,7 @@ void ResourceBundle::ReloadFonts() {
=======
--- ui/base/resource/resource_bundle.cc.orig	2020-03-03 18:54:06 UTC
+++ ui/base/resource/resource_bundle.cc
@@ -819,7 +819,7 @@ void ResourceBundle::ReloadFonts() {
>>>>>>> upstream/master
 }
 
 ScaleFactor ResourceBundle::GetMaxScaleFactor() const {
-#if defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
   return max_scale_factor_;
 #else
   return GetSupportedScaleFactors().back();
<<<<<<< HEAD
@@ -871,7 +871,7 @@ void ResourceBundle::InitSharedInstance(Delegate* dele
=======
@@ -872,7 +872,7 @@ void ResourceBundle::InitSharedInstance(Delegate* dele
>>>>>>> upstream/master
   // On platforms other than iOS, 100P is always a supported scale factor.
   // For Windows we have a separate case in this function.
   supported_scale_factors.push_back(SCALE_FACTOR_100P);
-#if defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_WIN)
+#if defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_WIN) || defined(OS_BSD)
   supported_scale_factors.push_back(SCALE_FACTOR_200P);
 #endif
 #endif
