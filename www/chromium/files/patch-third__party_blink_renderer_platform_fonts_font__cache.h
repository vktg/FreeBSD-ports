<<<<<<< HEAD
--- third_party/blink/renderer/platform/fonts/font_cache.h.orig	2019-12-16 21:51:29 UTC
+++ third_party/blink/renderer/platform/fonts/font_cache.h
@@ -162,7 +162,7 @@ class PLATFORM_EXPORT FontCache {
=======
--- third_party/blink/renderer/platform/fonts/font_cache.h.orig	2020-03-03 18:53:57 UTC
+++ third_party/blink/renderer/platform/fonts/font_cache.h
@@ -58,7 +58,7 @@
 #include "third_party/skia/include/core/SkFontMgr.h"
 #include "third_party/skia/include/core/SkRefCnt.h"
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include "ui/gfx/font_fallback_linux.h"
 #endif
 
@@ -166,7 +166,7 @@ class PLATFORM_EXPORT FontCache {
>>>>>>> upstream/master
   sk_sp<SkFontMgr> FontManager() { return font_manager_; }
   static void SetFontManager(sk_sp<SkFontMgr>);
 
-#if defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
   // These are needed for calling QueryRenderStyleForStrike, since
   // gfx::GetFontRenderParams makes distinctions based on DSF.
   static float DeviceScaleFactor() { return device_scale_factor_; }
<<<<<<< HEAD
@@ -237,7 +237,7 @@ class PLATFORM_EXPORT FontCache {
=======
@@ -241,11 +241,11 @@ class PLATFORM_EXPORT FontCache {
>>>>>>> upstream/master
       const FontDescription&);
 #endif  // defined(OS_ANDROID)
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
<<<<<<< HEAD
   struct PlatformFallbackFont {
     String name;
     std::string filename;
@@ -249,7 +249,7 @@ class PLATFORM_EXPORT FontCache {
   static void GetFontForCharacter(UChar32,
=======
   static bool GetFontForCharacter(UChar32,
>>>>>>> upstream/master
                                   const char* preferred_locale,
                                   gfx::FallbackFontData*);
-#endif  // defined(OS_LINUX)
+#endif  // defined(OS_LINUX) || defined(OS_BSD)
 
   scoped_refptr<SimpleFontData> FontDataFromFontPlatformData(
       const FontPlatformData*,
@@ -321,12 +321,12 @@ class PLATFORM_EXPORT FontCache {
                                    const FontFaceCreationParams&,
                                    std::string& name);
 
-#if defined(OS_ANDROID) || defined(OS_LINUX)
+#if defined(OS_ANDROID) || defined(OS_LINUX) || defined(OS_BSD)
   static AtomicString GetFamilyNameForCharacter(SkFontMgr*,
                                                 UChar32,
                                                 const FontDescription&,
                                                 FontFallbackPriority);
-#endif  // defined(OS_ANDROID) || defined(OS_LINUX)
+#endif  // defined(OS_ANDROID) || defined(OS_LINUX) || defined(OS_BSD)
 
   scoped_refptr<SimpleFontData> FallbackOnStandardFontStyle(
       const FontDescription&,
<<<<<<< HEAD
@@ -360,7 +360,7 @@ class PLATFORM_EXPORT FontCache {
=======
@@ -356,7 +356,7 @@ class PLATFORM_EXPORT FontCache {
>>>>>>> upstream/master
   std::unique_ptr<FallbackFamilyStyleCache> fallback_params_cache_;
 #endif  // defined(OS_WIN)
 
-#if defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
   static float device_scale_factor_;
 #endif
 
