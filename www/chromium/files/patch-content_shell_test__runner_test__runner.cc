<<<<<<< HEAD
--- content/shell/test_runner/test_runner.cc.orig	2019-12-16 21:51:26 UTC
=======
--- content/shell/test_runner/test_runner.cc.orig	2020-03-03 18:53:54 UTC
>>>>>>> upstream/master
+++ content/shell/test_runner/test_runner.cc
@@ -64,7 +64,7 @@
 #include "ui/gfx/geometry/size.h"
 #include "ui/gfx/skia_util.h"
 
-#if defined(OS_LINUX) || defined(OS_FUCHSIA)
+#if defined(OS_LINUX) || defined(OS_FUCHSIA) || defined(OS_BSD)
 #include "third_party/blink/public/platform/web_font_render_style.h"
 #endif
 
<<<<<<< HEAD
@@ -1514,7 +1514,7 @@ void TestRunner::Reset() {
=======
@@ -1507,7 +1507,7 @@ void TestRunner::Reset() {
>>>>>>> upstream/master
   drag_image_.reset();
 
   blink::WebSecurityPolicy::ClearOriginAccessList();
-#if defined(OS_LINUX) || defined(OS_FUCHSIA)
+#if defined(OS_LINUX) || defined(OS_FUCHSIA) || defined(OS_BSD)
   blink::WebFontRenderStyle::SetSubpixelPositioning(false);
 #endif
 
<<<<<<< HEAD
@@ -2088,7 +2088,7 @@ void TestRunner::AddOriginAccessAllowListEntry(
=======
@@ -2081,7 +2081,7 @@ void TestRunner::AddOriginAccessAllowListEntry(
>>>>>>> upstream/master
 }
 
 void TestRunner::SetTextSubpixelPositioning(bool value) {
-#if defined(OS_LINUX) || defined(OS_FUCHSIA)
+#if defined(OS_LINUX) || defined(OS_FUCHSIA) || defined(OS_BSD)
   // Since FontConfig doesn't provide a variable to control subpixel
   // positioning, we'll fall back to setting it globally for all fonts.
   blink::WebFontRenderStyle::SetSubpixelPositioning(value);
