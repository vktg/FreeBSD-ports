<<<<<<< HEAD
--- third_party/angle/third_party/vulkan-loader/src/loader/loader.c.orig	2019-12-16 21:56:20 UTC
=======
--- third_party/angle/third_party/vulkan-loader/src/loader/loader.c.orig	2020-03-03 18:55:32 UTC
>>>>>>> upstream/master
+++ third_party/angle/third_party/vulkan-loader/src/loader/loader.c
@@ -238,7 +238,7 @@ void *loader_device_heap_realloc(const struct loader_d
 }
 
 // Environment variables
-#if defined(__linux__) || defined(__APPLE__)
+#if defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__)
 
 static inline bool IsHighIntegrity() {
     return geteuid() != getuid() || getegid() != getgid();
