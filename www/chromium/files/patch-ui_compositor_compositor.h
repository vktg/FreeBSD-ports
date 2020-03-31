<<<<<<< HEAD
--- ui/compositor/compositor.h.orig	2019-12-17 19:57:38 UTC
+++ ui/compositor/compositor.h
@@ -412,7 +412,7 @@ class COMPOSITOR_EXPORT Compositor : public cc::LayerT
=======
--- ui/compositor/compositor.h.orig	2020-03-03 18:54:06 UTC
+++ ui/compositor/compositor.h
@@ -417,7 +417,7 @@ class COMPOSITOR_EXPORT Compositor : public cc::LayerT
>>>>>>> upstream/master
   void OnFirstSurfaceActivation(const viz::SurfaceInfo& surface_info) override;
   void OnFrameTokenChanged(uint32_t frame_token) override;
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   void OnCompleteSwapWithNewSize(const gfx::Size& size);
 #endif
 
