--- chrome/browser/ui/views/tabs/tab.cc.orig	2019-12-16 21:51:24 UTC
+++ chrome/browser/ui/views/tabs/tab.cc
<<<<<<< HEAD
@@ -550,7 +550,7 @@ void Tab::OnMouseCaptureLost() {
 void Tab::OnMouseMoved(const ui::MouseEvent& event) {
   tab_style_->SetHoverLocation(event.location());
   controller_->OnMouseEventInTab(this, event);
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   MaybeUpdateHoverStatus(event);
 #endif
 }
@@ -560,7 +560,7 @@ void Tab::OnMouseEntered(const ui::MouseEvent& event) 
 }
=======
@@ -582,7 +582,7 @@ void Tab::OnMouseEntered(const ui::MouseEvent& event) 
   if (mouse_hovered_ || !GetWidget()->IsMouseEventsEnabled())
     return;
>>>>>>> upstream/master
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // Move the hit test area for hovering up so that it is not overlapped by tab
   // hover cards when they are shown.
   // TODO(crbug/978134): Once Linux/CrOS widget transparency is solved, remove
