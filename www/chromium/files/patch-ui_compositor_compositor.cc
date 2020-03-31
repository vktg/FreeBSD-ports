<<<<<<< HEAD
--- ui/compositor/compositor.cc.orig	2019-12-17 19:57:24 UTC
+++ ui/compositor/compositor.cc
@@ -681,7 +681,7 @@ void Compositor::OnFrameTokenChanged(uint32_t frame_to
=======
--- ui/compositor/compositor.cc.orig	2020-03-03 18:54:06 UTC
+++ ui/compositor/compositor.cc
@@ -677,7 +677,7 @@ void Compositor::OnFrameTokenChanged(uint32_t frame_to
>>>>>>> upstream/master
   NOTREACHED();
 }
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 void Compositor::OnCompleteSwapWithNewSize(const gfx::Size& size) {
   for (auto& observer : observer_list_)
     observer.OnCompositingCompleteSwapWithNewSize(this, size);
