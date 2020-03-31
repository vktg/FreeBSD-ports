<<<<<<< HEAD
--- media/webrtc/webrtc_switches.cc.orig	2019-12-17 19:45:42 UTC
+++ media/webrtc/webrtc_switches.cc
@@ -44,7 +44,7 @@ namespace media {
=======
--- media/webrtc/webrtc_switches.cc.orig	2020-03-03 18:53:10 UTC
+++ media/webrtc/webrtc_switches.cc
@@ -50,7 +50,7 @@ namespace media {
>>>>>>> upstream/master
 
 bool IsWebRtcApmInAudioServiceEnabled() {
 #if defined(OS_WIN) || defined(OS_MACOSX) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   return base::FeatureList::IsEnabled(features::kWebRtcApmInAudioService) &&
          !base::CommandLine::ForCurrentProcess()->HasSwitch(
              switches::kForceDisableWebRtcApmInAudioService);
<<<<<<< HEAD
@@ -53,4 +53,4 @@ bool IsWebRtcApmInAudioServiceEnabled() {
 #endif
 }
 
-}  // namespace media
\ No newline at end of file
+}  // namespace media
=======
>>>>>>> upstream/master
