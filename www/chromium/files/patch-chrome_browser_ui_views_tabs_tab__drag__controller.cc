<<<<<<< HEAD
--- chrome/browser/ui/views/tabs/tab_drag_controller.cc.orig	2019-12-16 21:51:24 UTC
+++ chrome/browser/ui/views/tabs/tab_drag_controller.cc
@@ -446,7 +446,7 @@ void TabDragController::Init(TabDragContext* source_co
=======
--- chrome/browser/ui/views/tabs/tab_drag_controller.cc.orig	2020-03-03 18:53:52 UTC
+++ chrome/browser/ui/views/tabs/tab_drag_controller.cc
@@ -450,7 +450,7 @@ void TabDragController::Init(TabDragContext* source_co
>>>>>>> upstream/master
   //     synchronous on desktop Linux, so use that.
   // - Chrome OS
   //     Releasing capture on Ash cancels gestures so avoid it.
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   can_release_capture_ = false;
 #endif
<<<<<<< HEAD
   start_point_in_screen_ = gfx::Point(source_tab_offset, mouse_offset.y());
@@ -883,7 +883,7 @@ TabDragController::DragBrowserToNewTabStrip(TabDragCon
=======
   start_point_in_screen_ = gfx::Point(source_view_offset, mouse_offset.y());
@@ -895,7 +895,7 @@ TabDragController::DragBrowserToNewTabStrip(TabDragCon
>>>>>>> upstream/master
     else
       SetCapture(target_context);
 
-#if !defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if (!defined(OS_LINUX) || defined(OS_CHROMEOS)) && !defined(OS_BSD)
     // EndMoveLoop is going to snap the window back to its original location.
     // Hide it so users don't see this. Hiding a window in Linux aura causes
     // it to lose capture so skip it.
<<<<<<< HEAD
@@ -2016,7 +2016,7 @@ TabDragController::Liveness TabDragController::GetLoca
=======
@@ -2060,7 +2060,7 @@ TabDragController::Liveness TabDragController::GetLoca
>>>>>>> upstream/master
     if (dragged_window)
       exclude.insert(dragged_window);
   }
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   // Exclude windows which are pending deletion via Browser::TabStripEmpty().
   // These windows can be returned in the Linux Aura port because the browser
   // window which was used for dragging is not hidden once all of its tabs are
