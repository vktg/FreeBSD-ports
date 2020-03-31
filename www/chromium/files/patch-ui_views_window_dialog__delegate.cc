<<<<<<< HEAD
--- ui/views/window/dialog_delegate.cc.orig	2019-12-16 21:51:34 UTC
+++ ui/views/window/dialog_delegate.cc
@@ -58,7 +58,7 @@ Widget* DialogDelegate::CreateDialogWidget(WidgetDeleg
=======
--- ui/views/window/dialog_delegate.cc.orig	2020-03-03 18:54:07 UTC
+++ ui/views/window/dialog_delegate.cc
@@ -59,7 +59,7 @@ Widget* DialogDelegate::CreateDialogWidget(WidgetDeleg
>>>>>>> upstream/master
 
 // static
 bool DialogDelegate::CanSupportCustomFrame(gfx::NativeView parent) {
-#if defined(OS_LINUX) && BUILDFLAG(ENABLE_DESKTOP_AURA)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && BUILDFLAG(ENABLE_DESKTOP_AURA)
   // The new style doesn't support unparented dialogs on Linux desktop.
   return parent != nullptr;
 #elif defined(OS_WIN)
