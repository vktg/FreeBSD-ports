<<<<<<< HEAD
--- chrome/common/channel_info_posix.cc.orig	2019-12-17 19:21:14 UTC
+++ chrome/common/channel_info_posix.cc
@@ -69,7 +69,7 @@ std::string GetChannelSuffixForDataDir() {
 }
 #endif  // defined(GOOGLE_CHROME_BUILD)
=======
--- chrome/common/channel_info_posix.cc.orig	2020-03-03 18:53:03 UTC
+++ chrome/common/channel_info_posix.cc
@@ -67,7 +67,7 @@ std::string GetChannelSuffixForDataDir() {
   }
 }
>>>>>>> upstream/master
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 std::string GetDesktopName(base::Environment* env) {
 #if BUILDFLAG(GOOGLE_CHROME_BRANDING)
   version_info::Channel product_channel(GetChannel());
<<<<<<< HEAD
@@ -91,7 +91,7 @@ std::string GetDesktopName(base::Environment* env) {
=======
@@ -89,7 +89,7 @@ std::string GetDesktopName(base::Environment* env) {
>>>>>>> upstream/master
   return "chromium-browser.desktop";
 #endif
 }
-#endif  // defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#endif  // (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 
 version_info::Channel GetChannel() {
<<<<<<< HEAD
   return GetChannelImpl(nullptr, nullptr);
=======
   return GetChannelImpl(nullptr);
>>>>>>> upstream/master
