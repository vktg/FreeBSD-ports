<<<<<<< HEAD
--- ui/views/widget/native_widget_aura.cc.orig	2019-12-17 20:00:27 UTC
+++ ui/views/widget/native_widget_aura.cc
@@ -59,7 +59,7 @@
 #include "ui/views/widget/desktop_aura/desktop_window_tree_host_win.h"
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 #include "ui/views/linux_ui/linux_ui.h"
 #include "ui/views/widget/desktop_aura/desktop_window_tree_host_x11.h"
 #endif
@@ -1065,7 +1065,7 @@ void NativeWidgetAura::SetInitialFocus(ui::WindowShowS
 // Widget, public:
 
 namespace {
-#if defined(OS_WIN) || (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+#if defined(OS_WIN) || (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 void CloseWindow(aura::Window* window) {
   if (window) {
     Widget* widget = Widget::GetWidgetForNativeView(window);
=======
--- ui/views/widget/native_widget_aura.cc.orig	2020-03-03 18:54:07 UTC
+++ ui/views/widget/native_widget_aura.cc
@@ -64,7 +64,7 @@
 #include "ui/views/widget/desktop_aura/desktop_window_tree_host_win.h"
 #endif
 
-#if BUILDFLAG(ENABLE_DESKTOP_AURA) && defined(OS_LINUX)
+#if BUILDFLAG(ENABLE_DESKTOP_AURA) && (defined(OS_LINUX) || defined(OS_BSD))
 #include "ui/views/linux_ui/linux_ui.h"
 #include "ui/views/widget/desktop_aura/desktop_window_tree_host_linux.h"
 #endif
>>>>>>> upstream/master
@@ -1095,13 +1095,13 @@ void Widget::CloseAllSecondaryWidgets() {
   EnumThreadWindows(GetCurrentThreadId(), WindowCallbackProc, 0);
 #endif
 
<<<<<<< HEAD
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
=======
-#if BUILDFLAG(ENABLE_DESKTOP_AURA) && defined(OS_LINUX)
+#if BUILDFLAG(ENABLE_DESKTOP_AURA) && (defined(OS_LINUX) || defined(OS_BSD))
>>>>>>> upstream/master
   DesktopWindowTreeHostLinux::CleanUpWindowList(CloseWindow);
 #endif
 }
 
 const ui::NativeTheme* Widget::GetNativeTheme() const {
<<<<<<< HEAD
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
=======
-#if BUILDFLAG(ENABLE_DESKTOP_AURA) && defined(OS_LINUX)
+#if BUILDFLAG(ENABLE_DESKTOP_AURA) && (defined(OS_LINUX) || defined(OS_BSD))
>>>>>>> upstream/master
   const LinuxUI* linux_ui = LinuxUI::instance();
   if (linux_ui) {
     ui::NativeTheme* native_theme =
