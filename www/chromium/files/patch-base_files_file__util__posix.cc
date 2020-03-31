<<<<<<< HEAD
--- base/files/file_util_posix.cc.orig	2019-12-16 21:51:21 UTC
+++ base/files/file_util_posix.cc
@@ -435,7 +435,7 @@ bool CreatePipe(ScopedFD* read_fd, ScopedFD* write_fd,
=======
--- base/files/file_util_posix.cc.orig	2020-03-03 18:52:59 UTC
+++ base/files/file_util_posix.cc
@@ -411,7 +411,7 @@ bool CreatePipe(ScopedFD* read_fd, ScopedFD* write_fd,
>>>>>>> upstream/master
 }
 
 bool CreateLocalNonBlockingPipe(int fds[2]) {
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   return pipe2(fds, O_CLOEXEC | O_NONBLOCK) == 0;
 #else
   int raw_fds[2];
