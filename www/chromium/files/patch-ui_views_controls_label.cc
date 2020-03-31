<<<<<<< HEAD
--- ui/views/controls/label.cc.orig	2019-12-16 21:51:34 UTC
+++ ui/views/controls/label.cc
@@ -689,7 +689,7 @@ bool Label::OnMousePressed(const ui::MouseEvent& event
=======
--- ui/views/controls/label.cc.orig	2020-03-03 18:54:07 UTC
+++ ui/views/controls/label.cc
@@ -695,7 +695,7 @@ bool Label::OnMousePressed(const ui::MouseEvent& event
>>>>>>> upstream/master
     GetFocusManager()->SetFocusedView(this);
   }
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
   if (event.IsOnlyMiddleMouseButton() && GetFocusManager() && !had_focus)
     GetFocusManager()->SetFocusedView(this);
 #endif
<<<<<<< HEAD
@@ -874,7 +874,7 @@ bool Label::PasteSelectionClipboard() {
=======
@@ -880,7 +880,7 @@ bool Label::PasteSelectionClipboard() {
>>>>>>> upstream/master
 }
 
 void Label::UpdateSelectionClipboard() {
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   if (!GetObscured()) {
     ui::ScopedClipboardWriter(ui::ClipboardBuffer::kSelection)
         .WriteText(GetSelectedText());
