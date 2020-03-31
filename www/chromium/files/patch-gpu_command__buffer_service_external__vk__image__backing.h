<<<<<<< HEAD
--- gpu/command_buffer/service/external_vk_image_backing.h.orig	2019-12-16 21:51:26 UTC
+++ gpu/command_buffer/service/external_vk_image_backing.h
@@ -131,7 +131,7 @@ class ExternalVkImageBacking final : public SharedImag
                          base::Optional<DawnTextureFormat> dawn_format,
=======
--- gpu/command_buffer/service/external_vk_image_backing.h.orig	2020-03-03 18:53:55 UTC
+++ gpu/command_buffer/service/external_vk_image_backing.h
@@ -135,7 +135,7 @@ class ExternalVkImageBacking final : public SharedImag
                          base::Optional<WGPUTextureFormat> wgpu_format,
>>>>>>> upstream/master
                          base::Optional<uint32_t> memory_type_index);
 
-#ifdef OS_LINUX
+#if defined(OS_LINUX) || defined(OS_BSD)
   // Extract file descriptor from image
   int GetMemoryFd(const GrVkImageInfo& image_info);
 #endif
