<<<<<<< HEAD
--- content/renderer/renderer_blink_platform_impl.cc.orig	2019-12-16 21:51:26 UTC
+++ content/renderer/renderer_blink_platform_impl.cc
@@ -104,7 +104,7 @@
=======
--- content/renderer/renderer_blink_platform_impl.cc.orig	2020-03-03 18:53:54 UTC
+++ content/renderer/renderer_blink_platform_impl.cc
@@ -99,7 +99,7 @@
>>>>>>> upstream/master
 
 #if defined(OS_MACOSX)
 #include "content/child/child_process_sandbox_support_impl_mac.h"
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
 #include "content/child/child_process_sandbox_support_impl_linux.h"
 #endif
 
@@ -174,7 +174,7 @@ RendererBlinkPlatformImpl::RendererBlinkPlatformImpl(
   if (RenderThreadImpl::current()) {
     io_runner_ = RenderThreadImpl::current()->GetIOTaskRunner();
     thread_safe_sender_ = RenderThreadImpl::current()->thread_safe_sender();
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
     mojo::PendingRemote<font_service::mojom::FontService> font_service;
     RenderThreadImpl::current()->BindHostReceiver(
         font_service.InitWithNewPipeAndPassReceiver());
@@ -184,7 +184,7 @@ RendererBlinkPlatformImpl::RendererBlinkPlatformImpl(
 #endif
   }
 
-#if defined(OS_LINUX) || defined(OS_MACOSX)
+#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_BSD)
   if (sandboxEnabled()) {
 #if defined(OS_MACOSX)
     sandbox_support_ = std::make_unique<WebSandboxSupportMac>();
<<<<<<< HEAD
@@ -217,7 +217,7 @@ RendererBlinkPlatformImpl::~RendererBlinkPlatformImpl(
 }
 
 void RendererBlinkPlatformImpl::Shutdown() {
-#if defined(OS_LINUX) || defined(OS_MACOSX)
+#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_BSD)
   // SandboxSupport contains a map of OutOfProcessFont objects, which hold
   // WebStrings and WebVectors, which become invalidated when blink is shut
   // down. Hence, we need to clear that map now, just before blink::shutdown()
@@ -282,7 +282,7 @@ RendererBlinkPlatformImpl::CreateNetworkURLLoaderFacto
=======
@@ -266,7 +266,7 @@ RendererBlinkPlatformImpl::CreateNetworkURLLoaderFacto
>>>>>>> upstream/master
 
 void RendererBlinkPlatformImpl::SetDisplayThreadPriority(
     base::PlatformThreadId thread_id) {
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   if (RenderThreadImpl* render_thread = RenderThreadImpl::current()) {
     render_thread->render_message_filter()->SetThreadPriority(
         thread_id, base::ThreadPriority::DISPLAY);
<<<<<<< HEAD
@@ -295,7 +295,7 @@ blink::BlameContext* RendererBlinkPlatformImpl::GetTop
=======
@@ -279,7 +279,7 @@ blink::BlameContext* RendererBlinkPlatformImpl::GetTop
>>>>>>> upstream/master
 }
 
 blink::WebSandboxSupport* RendererBlinkPlatformImpl::GetSandboxSupport() {
-#if defined(OS_LINUX) || defined(OS_MACOSX)
+#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_BSD)
   return sandbox_support_.get();
 #else
   // These platforms do not require sandbox support.
