<<<<<<< HEAD
--- media/mojo/mojom/video_frame_mojom_traits.cc.orig	2019-12-16 21:51:27 UTC
+++ media/mojo/mojom/video_frame_mojom_traits.cc
@@ -56,7 +56,7 @@ media::mojom::VideoFrameDataPtr MakeVideoFrameData(
=======
--- media/mojo/mojom/video_frame_mojom_traits.cc.orig	2020-03-03 18:53:55 UTC
+++ media/mojo/mojom/video_frame_mojom_traits.cc
@@ -20,9 +20,9 @@
 #include "ui/gfx/mojom/buffer_types_mojom_traits.h"
 #include "ui/gfx/mojom/color_space_mojom_traits.h"
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include "base/posix/eintr_wrapper.h"
-#endif  // defined(OS_LINUX)
+#endif  // defined(OS_LINUX) || defined(OS_BSD)
 
 namespace mojo {
 
@@ -60,7 +60,7 @@ media::mojom::VideoFrameDataPtr MakeVideoFrameData(
>>>>>>> upstream/master
             mojo_frame->PlaneOffset(media::VideoFrame::kVPlane)));
   }
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   if (input->storage_type() == media::VideoFrame::STORAGE_DMABUFS) {
     std::vector<mojo::ScopedHandle> dmabuf_fds;
 
<<<<<<< HEAD
@@ -157,7 +157,7 @@ bool StructTraits<media::mojom::VideoFrameDataView,
=======
@@ -161,7 +161,7 @@ bool StructTraits<media::mojom::VideoFrameDataView,
>>>>>>> upstream/master
         shared_buffer_data.u_offset(), shared_buffer_data.v_offset(),
         shared_buffer_data.y_stride(), shared_buffer_data.u_stride(),
         shared_buffer_data.v_stride(), timestamp);
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   } else if (data.is_dmabuf_data()) {
     media::mojom::DmabufVideoFrameDataDataView dmabuf_data;
     data.GetDmabufDataDataView(&dmabuf_data);
