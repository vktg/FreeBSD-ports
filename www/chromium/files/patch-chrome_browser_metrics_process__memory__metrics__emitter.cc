<<<<<<< HEAD
--- chrome/browser/metrics/process_memory_metrics_emitter.cc.orig	2019-12-16 21:51:23 UTC
+++ chrome/browser/metrics/process_memory_metrics_emitter.cc
@@ -375,7 +375,7 @@ void EmitProcessUmaAndUkm(const GlobalMemoryDump::Proc
=======
--- chrome/browser/metrics/process_memory_metrics_emitter.cc.orig	2020-03-03 18:53:51 UTC
+++ chrome/browser/metrics/process_memory_metrics_emitter.cc
@@ -425,7 +425,7 @@ void EmitProcessUmaAndUkm(const GlobalMemoryDump::Proc
>>>>>>> upstream/master
 
   builder->SetPrivateMemoryFootprint(pmd.os_dump().private_footprint_kb / 1024);
   builder->SetSharedMemoryFootprint(pmd.os_dump().shared_footprint_kb / 1024);
-#if defined(OS_LINUX) || defined(OS_ANDROID)
+#if defined(OS_LINUX) || defined(OS_ANDROID) || defined(OS_BSD)
   builder->SetPrivateSwapFootprint(pmd.os_dump().private_footprint_swap_kb /
                                    1024);
 #endif
<<<<<<< HEAD
@@ -398,7 +398,7 @@ void EmitProcessUmaAndUkm(const GlobalMemoryDump::Proc
=======
@@ -448,7 +448,7 @@ void EmitProcessUmaAndUkm(const GlobalMemoryDump::Proc
>>>>>>> upstream/master
   MEMORY_METRICS_HISTOGRAM_MB(std::string(kMemoryHistogramPrefix) +
                                   process_name + ".SharedMemoryFootprint",
                               pmd.os_dump().shared_footprint_kb / 1024);
-#if defined(OS_LINUX) || defined(OS_ANDROID)
+#if defined(OS_LINUX) || defined(OS_ANDROID) || defined(OS_BSD)
   MEMORY_METRICS_HISTOGRAM_MB(std::string(kMemoryHistogramPrefix) +
                                   process_name + ".PrivateSwapFootprint",
                               pmd.os_dump().private_footprint_swap_kb / 1024);
