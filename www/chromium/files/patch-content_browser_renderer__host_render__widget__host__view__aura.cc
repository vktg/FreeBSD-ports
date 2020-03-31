<<<<<<< HEAD
--- content/browser/renderer_host/render_widget_host_view_aura.cc.orig	2019-12-16 21:51:26 UTC
=======
--- content/browser/renderer_host/render_widget_host_view_aura.cc.orig	2020-03-03 18:53:54 UTC
>>>>>>> upstream/master
+++ content/browser/renderer_host/render_widget_host_view_aura.cc
@@ -116,7 +116,7 @@
 #include "content/browser/accessibility/browser_accessibility_auralinux.h"
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_BSD) || defined(OS_LINUX)) && !defined(OS_CHROMEOS)
 #include "ui/base/ime/linux/text_edit_command_auralinux.h"
 #include "ui/base/ime/linux/text_edit_key_bindings_delegate_auralinux.h"
 #endif
<<<<<<< HEAD
@@ -2212,7 +2212,7 @@ bool RenderWidgetHostViewAura::NeedsInputGrab() {
=======
@@ -2180,7 +2180,7 @@ bool RenderWidgetHostViewAura::NeedsInputGrab() {
>>>>>>> upstream/master
 }
 
 bool RenderWidgetHostViewAura::NeedsMouseCapture() {
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_BSD) || defined(OS_LINUX)) && !defined(OS_CHROMEOS)
   return NeedsInputGrab();
 #endif
   return false;
<<<<<<< HEAD
@@ -2385,7 +2385,7 @@ void RenderWidgetHostViewAura::ForwardKeyboardEventWit
=======
@@ -2349,7 +2349,7 @@ void RenderWidgetHostViewAura::ForwardKeyboardEventWit
>>>>>>> upstream/master
   if (!target_host)
     return;
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_BSD) || defined(OS_LINUX)) && !defined(OS_CHROMEOS)
   ui::TextEditKeyBindingsDelegateAuraLinux* keybinding_delegate =
       ui::GetTextEditKeyBindingsDelegate();
   std::vector<ui::TextEditCommandAuraLinux> commands;
