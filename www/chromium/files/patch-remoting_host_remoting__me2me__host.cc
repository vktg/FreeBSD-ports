<<<<<<< HEAD
--- remoting/host/remoting_me2me_host.cc.orig	2019-12-16 21:51:27 UTC
+++ remoting/host/remoting_me2me_host.cc
@@ -121,13 +121,13 @@
=======
--- remoting/host/remoting_me2me_host.cc.orig	2020-03-03 18:53:55 UTC
+++ remoting/host/remoting_me2me_host.cc
@@ -118,13 +118,13 @@
>>>>>>> upstream/master
 #include "remoting/host/mac/permission_utils.h"
 #endif  // defined(OS_MACOSX)
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include <gtk/gtk.h>
 #include "base/linux_util.h"
 #include "remoting/host/audio_capturer_linux.h"
 #include "remoting/host/linux/certificate_watcher.h"
 #include "ui/gfx/x/x11.h"
-#endif  // defined(OS_LINUX)
+#endif  // defined(OS_LINUX) || defined(OS_BSD)
 
 #if defined(OS_WIN)
 #include <commctrl.h>
<<<<<<< HEAD
@@ -162,11 +162,11 @@ const char kApplicationName[] = "chromoting";
=======
@@ -159,11 +159,11 @@ const char kApplicationName[] = "chromoting";
>>>>>>> upstream/master
 const char kStdinConfigPath[] = "-";
 #endif  // !defined(REMOTING_MULTI_PROCESS)
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 // The command line switch used to pass name of the pipe to capture audio on
 // linux.
 const char kAudioPipeSwitchName[] = "audio-pipe-name";
-#endif  // defined(OS_LINUX)
+#endif  // defined(OS_LINUX) || defined(OS_BSD)
 
 #if defined(OS_POSIX)
 // The command line switch used to pass name of the unix domain socket used to
<<<<<<< HEAD
@@ -359,7 +359,7 @@ class HostProcess : public ConfigWatcher::Delegate,
=======
@@ -356,7 +356,7 @@ class HostProcess : public ConfigWatcher::Delegate,
>>>>>>> upstream/master
 
   std::unique_ptr<ChromotingHostContext> context_;
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // Watch for certificate changes and kill the host when changes occur
   std::unique_ptr<CertificateWatcher> cert_watcher_;
 #endif
<<<<<<< HEAD
@@ -560,10 +560,10 @@ bool HostProcess::InitWithCommandLine(const base::Comm
=======
@@ -586,10 +586,10 @@ bool HostProcess::InitWithCommandLine(const base::Comm
>>>>>>> upstream/master
   enable_window_capture_ = cmd_line->HasSwitch(kWindowIdSwitchName);
   if (enable_window_capture_) {
 
-#if defined(OS_LINUX) || defined(OS_WIN)
+#if defined(OS_LINUX) || defined(OS_WIN) || defined(OS_BSD)
     LOG(WARNING) << "Window capturing is not fully supported on Linux or "
                     "Windows.";
-#endif  // defined(OS_LINUX) || defined(OS_WIN)
+#endif  // defined(OS_LINUX) || defined(OS_WIN) || defined(OS_BSD)
 
     // uint32_t is large enough to hold window IDs on all platforms.
     uint32_t window_id;
<<<<<<< HEAD
@@ -758,7 +758,7 @@ void HostProcess::CreateAuthenticatorFactory() {
=======
@@ -784,7 +784,7 @@ void HostProcess::CreateAuthenticatorFactory() {
>>>>>>> upstream/master
     DCHECK(third_party_auth_config_.token_url.is_valid());
     DCHECK(third_party_auth_config_.token_validation_url.is_valid());
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
     if (!cert_watcher_) {
       cert_watcher_.reset(new CertificateWatcher(
           base::Bind(&HostProcess::ShutdownHost, this, kSuccessExitCode),
<<<<<<< HEAD
@@ -844,7 +844,7 @@ void HostProcess::StartOnUiThread() {
=======
@@ -870,7 +870,7 @@ void HostProcess::StartOnUiThread() {
>>>>>>> upstream/master
       base::Bind(&HostProcess::OnPolicyUpdate, base::Unretained(this)),
       base::Bind(&HostProcess::OnPolicyError, base::Unretained(this)));
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // If an audio pipe is specific on the command-line then initialize
   // AudioCapturerLinux to capture from it.
   base::FilePath audio_pipe_name = base::CommandLine::ForCurrentProcess()->
<<<<<<< HEAD
@@ -853,7 +853,7 @@ void HostProcess::StartOnUiThread() {
=======
@@ -879,7 +879,7 @@ void HostProcess::StartOnUiThread() {
>>>>>>> upstream/master
     remoting::AudioCapturerLinux::InitializePipeReader(
         context_->audio_task_runner(), audio_pipe_name);
   }
-#endif  // defined(OS_LINUX)
+#endif  // defined(OS_LINUX) || defined(OS_BSD)
 
 #if defined(OS_POSIX)
   base::FilePath security_key_socket_name =
<<<<<<< HEAD
@@ -908,7 +908,7 @@ void HostProcess::ShutdownOnUiThread() {
=======
@@ -934,7 +934,7 @@ void HostProcess::ShutdownOnUiThread() {
>>>>>>> upstream/master
   // It is now safe for the HostProcess to be deleted.
   self_ = nullptr;
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // Cause the global AudioPipeReader to be freed, otherwise the audio
   // thread will remain in-use and prevent the process from exiting.
   // TODO(wez): DesktopEnvironmentFactory should own the pipe reader.
<<<<<<< HEAD
@@ -1537,7 +1537,7 @@ void HostProcess::StartHost() {
=======
@@ -1538,7 +1538,7 @@ void HostProcess::StartHost() {
>>>>>>> upstream/master
   host_->AddExtension(std::make_unique<TestEchoExtension>());
 
   // TODO(simonmorris): Get the maximum session duration from a policy.
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   host_->SetMaximumSessionDuration(base::TimeDelta::FromHours(20));
 #endif
 
<<<<<<< HEAD
@@ -1718,7 +1718,7 @@ void HostProcess::OnCrash(const std::string& function_
=======
@@ -1708,7 +1708,7 @@ void HostProcess::OnCrash(const std::string& function_
>>>>>>> upstream/master
 int HostProcessMain() {
   HOST_LOG << "Starting host process: version " << STRINGIZE(VERSION);
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   if (!base::CommandLine::ForCurrentProcess()->HasSwitch(
           kReportOfflineReasonSwitchName)) {
     // Required in order for us to run multiple X11 threads.
