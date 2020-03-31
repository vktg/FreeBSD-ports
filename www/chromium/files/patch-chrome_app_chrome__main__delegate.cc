<<<<<<< HEAD
--- chrome/app/chrome_main_delegate.cc.orig	2019-12-16 21:51:22 UTC
=======
--- chrome/app/chrome_main_delegate.cc.orig	2020-03-03 18:53:48 UTC
>>>>>>> upstream/master
+++ chrome/app/chrome_main_delegate.cc
@@ -100,7 +100,7 @@
 #include "chrome/app/shutdown_signal_handlers_posix.h"
 #endif
 
-#if BUILDFLAG(ENABLE_NACL) && defined(OS_LINUX)
+#if BUILDFLAG(ENABLE_NACL) && defined(OS_LINUX) && !defined(OS_BSD)
 #include "components/nacl/common/nacl_paths.h"
 #include "components/nacl/zygote/nacl_fork_delegate_linux.h"
 #endif
<<<<<<< HEAD
@@ -139,7 +139,7 @@
=======
@@ -142,7 +142,7 @@
>>>>>>> upstream/master
 #include "v8/include/v8.h"
 #endif
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include "base/environment.h"
 #endif
 
<<<<<<< HEAD
@@ -243,7 +243,7 @@ bool UseHooks() {
=======
@@ -246,7 +246,7 @@ bool UseHooks() {
>>>>>>> upstream/master
 
 #endif  // defined(OS_WIN)
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) && !defined(OS_BSD)
 void AdjustLinuxOOMScore(const std::string& process_type) {
   // Browsers and zygotes should still be killable, but killed last.
   const int kZygoteScore = 0;
<<<<<<< HEAD
@@ -302,13 +302,13 @@ void AdjustLinuxOOMScore(const std::string& process_ty
=======
@@ -305,13 +305,13 @@ void AdjustLinuxOOMScore(const std::string& process_ty
>>>>>>> upstream/master
   if (score > -1)
     base::AdjustOOMScore(base::GetCurrentProcId(), score);
 }
-#endif  // defined(OS_LINUX)
+#endif  // defined(OS_LINUX) && !defined(OS_BSD)
 
 // Returns true if this subprocess type needs the ResourceBundle initialized
 // and resources loaded.
 bool SubprocessNeedsResourceBundle(const std::string& process_type) {
   return
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
       // The zygote process opens the resources for the renderers.
       process_type == service_manager::switches::kZygoteProcess ||
 #endif
<<<<<<< HEAD
@@ -347,7 +347,7 @@ bool HandleVersionSwitches(const base::CommandLine& co
=======
@@ -350,7 +350,7 @@ bool HandleVersionSwitches(const base::CommandLine& co
>>>>>>> upstream/master
   return false;
 }
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 // Show the man page if --help or -h is on the command line.
 void HandleHelpSwitches(const base::CommandLine& command_line) {
   if (command_line.HasSwitch(switches::kHelp) ||
<<<<<<< HEAD
@@ -357,7 +357,7 @@ void HandleHelpSwitches(const base::CommandLine& comma
=======
@@ -360,7 +360,7 @@ void HandleHelpSwitches(const base::CommandLine& comma
>>>>>>> upstream/master
     PLOG(FATAL) << "execlp failed";
   }
 }
-#endif  // defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#endif  // (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 
 #if !defined(OS_MACOSX) && !defined(OS_ANDROID)
 void SIGTERMProfilingShutdown(int signal) {
<<<<<<< HEAD
@@ -411,7 +411,7 @@ void InitializeUserDataDir(base::CommandLine* command_
=======
@@ -414,7 +414,7 @@ void InitializeUserDataDir(base::CommandLine* command_
>>>>>>> upstream/master
   std::string process_type =
       command_line->GetSwitchValueASCII(switches::kProcessType);
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // On Linux, Chrome does not support running multiple copies under different
   // DISPLAYs, so the profile directory can be specified in the environment to
   // support the virtual desktop use-case.
<<<<<<< HEAD
@@ -423,7 +423,7 @@ void InitializeUserDataDir(base::CommandLine* command_
=======
@@ -426,7 +426,7 @@ void InitializeUserDataDir(base::CommandLine* command_
>>>>>>> upstream/master
       user_data_dir = base::FilePath::FromUTF8Unsafe(user_data_dir_string);
     }
   }
-#endif  // OS_LINUX
+#endif  // OS_LINUX || OS_BSD
 #if defined(OS_MACOSX)
   policy::path_parser::CheckUserDataDirPolicy(&user_data_dir);
 #endif  // OS_MAC
<<<<<<< HEAD
@@ -480,7 +480,7 @@ void InitLogging(const std::string& process_type) {
=======
@@ -483,7 +483,7 @@ void InitLogging(const std::string& process_type) {
>>>>>>> upstream/master
 void RecordMainStartupMetrics(base::TimeTicks exe_entry_point_ticks) {
   if (!exe_entry_point_ticks.is_null())
     startup_metric_utils::RecordExeMainEntryPointTicks(exe_entry_point_ticks);
-#if defined(OS_MACOSX) || defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_MACOSX) || defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
   // Record the startup process creation time on supported platforms.
   startup_metric_utils::RecordStartupProcessCreationTime(
       base::Process::Current().CreationTime());
<<<<<<< HEAD
@@ -665,7 +665,7 @@ bool ChromeMainDelegate::BasicStartupComplete(int* exi
=======
@@ -684,7 +684,7 @@ bool ChromeMainDelegate::BasicStartupComplete(int* exi
>>>>>>> upstream/master
     *exit_code = 0;
     return true;  // Got a --version switch; exit with a success error code.
   }
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   // This will directly exit if the user asked for help.
   HandleHelpSwitches(command_line);
 #endif
<<<<<<< HEAD
@@ -689,7 +689,7 @@ bool ChromeMainDelegate::BasicStartupComplete(int* exi
=======
@@ -708,7 +708,7 @@ bool ChromeMainDelegate::BasicStartupComplete(int* exi
>>>>>>> upstream/master
 #if defined(OS_CHROMEOS)
   chromeos::RegisterPathProvider();
 #endif
-#if BUILDFLAG(ENABLE_NACL) && defined(OS_LINUX)
+#if BUILDFLAG(ENABLE_NACL) && defined(OS_LINUX) && !defined(OS_BSD)
   nacl::RegisterPathProvider();
 #endif
 
<<<<<<< HEAD
@@ -883,7 +883,7 @@ void ChromeMainDelegate::PreSandboxStartup() {
=======
@@ -902,7 +902,7 @@ void ChromeMainDelegate::PreSandboxStartup() {
>>>>>>> upstream/master
 #if defined(OS_WIN)
   child_process_logging::Init();
 #endif
-#if defined(ARCH_CPU_ARM_FAMILY) && (defined(OS_ANDROID) || defined(OS_LINUX))
+#if defined(ARCH_CPU_ARM_FAMILY) && (defined(OS_ANDROID) || defined(OS_LINUX) || defined(OS_BSD))
   // Create an instance of the CPU class to parse /proc/cpuinfo and cache
   // cpu_brand info.
   base::CPU cpu_info;
<<<<<<< HEAD
@@ -1007,7 +1007,7 @@ void ChromeMainDelegate::PreSandboxStartup() {
=======
@@ -1026,7 +1026,7 @@ void ChromeMainDelegate::PreSandboxStartup() {
>>>>>>> upstream/master
   InitializePDF();
 #endif
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
   // Zygote needs to call InitCrashReporter() in RunZygote().
   if (process_type != service_manager::switches::kZygoteProcess) {
 #if defined(OS_ANDROID)
<<<<<<< HEAD
@@ -1028,7 +1028,7 @@ void ChromeMainDelegate::PreSandboxStartup() {
=======
@@ -1047,7 +1047,7 @@ void ChromeMainDelegate::PreSandboxStartup() {
>>>>>>> upstream/master
     }
 #endif  // defined(OS_ANDROID)
   }
-#endif  // defined(OS_POSIX) && !defined(OS_MACOSX)
+#endif  // defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
 
   // After all the platform Breakpads have been initialized, store the command
   // line for crash reporting.
<<<<<<< HEAD
@@ -1038,7 +1038,7 @@ void ChromeMainDelegate::PreSandboxStartup() {
=======
@@ -1057,7 +1057,7 @@ void ChromeMainDelegate::PreSandboxStartup() {
>>>>>>> upstream/master
 void ChromeMainDelegate::SandboxInitialized(const std::string& process_type) {
   // Note: If you are adding a new process type below, be sure to adjust the
   // AdjustLinuxOOMScore function too.
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) && !defined(OS_BSD)
   AdjustLinuxOOMScore(process_type);
 #endif
 #if defined(OS_WIN)
