<<<<<<< HEAD
--- content/renderer/renderer_blink_platform_impl.h.orig	2019-12-16 21:51:26 UTC
=======
--- content/renderer/renderer_blink_platform_impl.h.orig	2020-03-03 18:53:54 UTC
>>>>>>> upstream/master
+++ content/renderer/renderer_blink_platform_impl.h
@@ -30,7 +30,7 @@
 #include "third_party/blink/public/mojom/cache_storage/cache_storage.mojom.h"
 #include "third_party/blink/public/mojom/loader/code_cache.mojom.h"
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include "components/services/font/public/cpp/font_loader.h"  // nogncheck
 #include "third_party/skia/include/core/SkRefCnt.h"           // nogncheck
 #endif
<<<<<<< HEAD
@@ -230,7 +230,7 @@ class CONTENT_EXPORT RendererBlinkPlatformImpl : publi
=======
@@ -218,7 +218,7 @@ class CONTENT_EXPORT RendererBlinkPlatformImpl : publi
>>>>>>> upstream/master
 
   scoped_refptr<base::SingleThreadTaskRunner> io_runner_;
 
-#if defined(OS_LINUX) || defined(OS_MACOSX)
+#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_BSD)
   std::unique_ptr<blink::WebSandboxSupport> sandbox_support_;
 #endif
 
<<<<<<< HEAD
@@ -254,7 +254,7 @@ class CONTENT_EXPORT RendererBlinkPlatformImpl : publi
=======
@@ -242,7 +242,7 @@ class CONTENT_EXPORT RendererBlinkPlatformImpl : publi
>>>>>>> upstream/master
   mojo::PendingRemote<blink::mojom::CodeCacheHost> code_cache_host_remote_;
   mojo::SharedRemote<blink::mojom::CodeCacheHost> code_cache_host_;
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   sk_sp<font_service::FontLoader> font_loader_;
 #endif
 
