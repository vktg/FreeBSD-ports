<<<<<<< HEAD
--- headless/lib/browser/headless_content_browser_client.cc.orig	2019-12-16 21:51:26 UTC
+++ headless/lib/browser/headless_content_browser_client.cc
@@ -166,7 +166,7 @@ HeadlessContentBrowserClient::GetGeneratedCodeCacheSet
=======
--- headless/lib/browser/headless_content_browser_client.cc.orig	2020-03-03 18:53:55 UTC
+++ headless/lib/browser/headless_content_browser_client.cc
@@ -167,7 +167,7 @@ HeadlessContentBrowserClient::GetGeneratedCodeCacheSet
>>>>>>> upstream/master
   return content::GeneratedCodeCacheSettings(true, 0, context->GetPath());
 }
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
 void HeadlessContentBrowserClient::GetAdditionalMappedFilesForChildProcess(
     const base::CommandLine& command_line,
     int child_process_id,
<<<<<<< HEAD
@@ -177,7 +177,7 @@ void HeadlessContentBrowserClient::GetAdditionalMapped
=======
@@ -178,7 +178,7 @@ void HeadlessContentBrowserClient::GetAdditionalMapped
>>>>>>> upstream/master
     mappings->Share(service_manager::kCrashDumpSignal, crash_signal_fd);
 #endif  // defined(HEADLESS_USE_BREAKPAD)
 }
-#endif  // defined(OS_POSIX) && !defined(OS_MACOSX)
+#endif  // defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_BSD)
 
 void HeadlessContentBrowserClient::AppendExtraCommandLineSwitches(
     base::CommandLine* command_line,
