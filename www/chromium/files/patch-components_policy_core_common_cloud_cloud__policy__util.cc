<<<<<<< HEAD
--- components/policy/core/common/cloud/cloud_policy_util.cc.orig	2019-12-16 21:51:25 UTC
=======
--- components/policy/core/common/cloud/cloud_policy_util.cc.orig	2020-03-03 18:53:06 UTC
>>>>>>> upstream/master
+++ components/policy/core/common/cloud/cloud_policy_util.cc
@@ -16,7 +16,7 @@
 #include <wincred.h>
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS) || defined(OS_MACOSX)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_MACOSX) || defined(OS_BSD)
 #include <pwd.h>
 #include <sys/types.h>
 #include <unistd.h>
@@ -31,7 +31,7 @@
 #import <SystemConfiguration/SCDynamicStoreCopySpecific.h>
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 #include <limits.h>  // For HOST_NAME_MAX
 #endif
 
<<<<<<< HEAD
@@ -57,7 +57,7 @@
=======
@@ -60,7 +60,7 @@
>>>>>>> upstream/master
 #include "base/system/sys_info.h"
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 #include "base/system/sys_info.h"
 #endif
 
<<<<<<< HEAD
@@ -66,11 +66,24 @@ namespace policy {
=======
@@ -69,11 +69,24 @@ namespace policy {
>>>>>>> upstream/master
 namespace em = enterprise_management;
 
 std::string GetMachineName() {
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS))
   char hostname[HOST_NAME_MAX];
   if (gethostname(hostname, HOST_NAME_MAX) == 0)  // Success.
     return hostname;
   return std::string();
+#elif defined(OS_BSD)
+  long host_name_max = sysconf(_SC_HOST_NAME_MAX);
+  if (host_name_max != -1) {
+    char *hostname = new char[host_name_max + 1]();
+    std::string hostname_r;
+
+    if (gethostname(hostname, host_name_max) == 0)
+      hostname_r = hostname;
+
+    delete[] hostname;
+    return hostname_r;
+  }
+  return std::string();
 #elif defined(OS_MACOSX)
<<<<<<< HEAD
   // Do not use NSHost currentHost, as it's very slow. http://crbug.com/138570
   SCDynamicStoreContext context = {0, NULL, NULL, NULL};
@@ -116,7 +129,7 @@ std::string GetMachineName() {
=======
 // TODO(crbug.com/1024115): Find a different replacement for -[NSHost
 // currentHost] on iOS.
@@ -123,7 +136,7 @@ std::string GetMachineName() {
>>>>>>> upstream/master
 }
 
 std::string GetOSVersion() {
-#if defined(OS_LINUX) || defined(OS_MACOSX)
+#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_BSD)
   return base::SysInfo::OperatingSystemVersion();
 #elif defined(OS_WIN)
   base::win::OSInfo::VersionNumber version_number =
<<<<<<< HEAD
@@ -139,7 +152,7 @@ std::string GetOSArchitecture() {
=======
@@ -146,7 +159,7 @@ std::string GetOSArchitecture() {
>>>>>>> upstream/master
 }
 
 std::string GetOSUsername() {
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS) || defined(OS_MACOSX)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_MACOSX) || defined(OS_BSD)
   struct passwd* creds = getpwuid(getuid());
   if (!creds || !creds->pw_name)
     return std::string();
