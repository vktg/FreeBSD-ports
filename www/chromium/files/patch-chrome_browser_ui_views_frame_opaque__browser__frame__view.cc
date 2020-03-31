<<<<<<< HEAD
--- chrome/browser/ui/views/frame/opaque_browser_frame_view.cc.orig	2019-12-16 21:51:24 UTC
=======
--- chrome/browser/ui/views/frame/opaque_browser_frame_view.cc.orig	2020-03-03 18:53:52 UTC
>>>>>>> upstream/master
+++ chrome/browser/ui/views/frame/opaque_browser_frame_view.cc
@@ -48,7 +48,7 @@
 #include "ui/views/window/vector_icons/vector_icons.h"
 #include "ui/views/window/window_shape.h"
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include "ui/views/controls/menu/menu_runner.h"
 #endif
 
<<<<<<< HEAD
@@ -354,7 +354,7 @@ void OpaqueBrowserFrameView::ButtonPressed(views::Butt
 void OpaqueBrowserFrameView::OnMenuButtonClicked(views::Button* source,
                                                  const gfx::Point& point,
                                                  const ui::Event* event) {
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   views::MenuRunner menu_runner(frame()->GetSystemMenuModel(),
                                 views::MenuRunner::HAS_MNEMONICS);
   menu_runner.RunMenuAt(
@@ -480,7 +480,7 @@ bool OpaqueBrowserFrameView::EverHasVisibleBackgroundT
=======
@@ -352,7 +352,7 @@ void OpaqueBrowserFrameView::ButtonPressed(views::Butt
   } else if (sender == close_button_) {
     frame()->CloseWithReason(views::Widget::ClosedReason::kCloseButtonClicked);
   } else if (sender == window_icon_) {
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
     // TODO(pbos): Figure out / document why this is Linux only. This needs a
     // comment.
     views::MenuRunner menu_runner(frame()->GetSystemMenuModel(),
@@ -481,7 +481,7 @@ bool OpaqueBrowserFrameView::EverHasVisibleBackgroundT
>>>>>>> upstream/master
 
 OpaqueBrowserFrameView::FrameButtonStyle
 OpaqueBrowserFrameView::GetFrameButtonStyle() const {
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   return FrameButtonStyle::kMdButton;
 #else
   return FrameButtonStyle::kImageButton;
