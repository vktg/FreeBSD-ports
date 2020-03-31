<<<<<<< HEAD
--- third_party/blink/renderer/core/scroll/scrollbar_theme_aura.cc.orig	2019-12-16 21:51:28 UTC
+++ third_party/blink/renderer/core/scroll/scrollbar_theme_aura.cc
@@ -152,7 +152,7 @@ bool ScrollbarThemeAura::SupportsDragSnapBack() const 
=======
--- third_party/blink/renderer/core/scroll/scrollbar_theme_aura.cc.orig	2020-03-03 18:53:56 UTC
+++ third_party/blink/renderer/core/scroll/scrollbar_theme_aura.cc
@@ -137,7 +137,7 @@ bool ScrollbarThemeAura::SupportsDragSnapBack() const 
>>>>>>> upstream/master
 // Disable snapback on desktop Linux to better integrate with the desktop
 // behavior. Typically, Linux apps do not implement scrollbar snapback (this
 // is true for at least GTK and QT apps).
-#if (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   return false;
 #endif
 
<<<<<<< HEAD
@@ -335,7 +335,7 @@ ScrollbarPart ScrollbarThemeAura::PartsToInvalidateOnT
=======
@@ -312,7 +312,7 @@ ScrollbarPart ScrollbarThemeAura::PartsToInvalidateOnT
>>>>>>> upstream/master
 
 bool ScrollbarThemeAura::ShouldCenterOnThumb(const Scrollbar& scrollbar,
                                              const WebMouseEvent& event) {
-#if (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+#if ((defined(OS_BSD) || defined(OS_LINUX)) && !defined(OS_CHROMEOS))
   if (event.button == WebPointerProperties::Button::kMiddle)
     return true;
 #endif
