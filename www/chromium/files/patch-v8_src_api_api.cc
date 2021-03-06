<<<<<<< HEAD
--- v8/src/api/api.cc.orig	2019-12-16 21:56:22 UTC
+++ v8/src/api/api.cc
@@ -111,7 +111,7 @@
 #include "src/wasm/wasm-result.h"
 #include "src/wasm/wasm-serialization.h"
 
-#if V8_OS_LINUX || V8_OS_MACOSX
+#if V8_OS_LINUX || V8_OS_MACOSX || V8_OS_OPENBSD || V8_OS_FREEBSD
 #include <signal.h>
 #include "include/v8-wasm-trap-handler-posix.h"
 #include "src/trap-handler/handler-inside-posix.h"
@@ -5609,7 +5609,7 @@ bool v8::V8::Initialize() {
=======
--- v8/src/api/api.cc.orig	2020-03-03 18:55:34 UTC
+++ v8/src/api/api.cc
@@ -5653,7 +5653,7 @@ bool v8::V8::Initialize() {
>>>>>>> upstream/master
   return true;
 }
 
-#if V8_OS_LINUX || V8_OS_MACOSX
+#if V8_OS_LINUX || V8_OS_MACOSX || V8_OS_OPENBSD || V8_OS_FREEBSD
 bool TryHandleWebAssemblyTrapPosix(int sig_code, siginfo_t* info,
                                    void* context) {
 #if V8_TARGET_ARCH_X64 && !V8_OS_ANDROID
