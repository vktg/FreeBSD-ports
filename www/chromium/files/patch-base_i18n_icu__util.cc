--- base/i18n/icu_util.cc.orig	2019-12-16 21:51:21 UTC
+++ base/i18n/icu_util.cc
@@ -43,7 +43,7 @@
 #endif
 
<<<<<<< HEAD
@@ -365,7 +365,7 @@ bool InitializeICU() {
 // TODO(jungshik): Some callers do not care about tz at all. If necessary,
 // add a boolean argument to this function to init'd the default tz only
 // when requested.
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
   if (result)
     std::unique_ptr<icu::TimeZone> zone(icu::TimeZone::createDefault());
=======
 #if defined(OS_ANDROID) || defined(OS_FUCHSIA) || \
-    (defined(OS_LINUX) && !defined(IS_CHROMECAST))
+    (defined(OS_LINUX) && !defined(IS_CHROMECAST)) || defined(OS_BSD)
 #include "third_party/icu/source/i18n/unicode/timezone.h"
>>>>>>> upstream/master
 #endif
 
@@ -288,7 +288,7 @@ void InitializeIcuTimeZone() {
       fuchsia::IntlProfileWatcher::GetPrimaryTimeZoneIdForIcuInitialization();
   icu::TimeZone::adoptDefault(
       icu::TimeZone::createTimeZone(icu::UnicodeString::fromUTF8(zone_id)));
-#elif defined(OS_LINUX) && !defined(IS_CHROMECAST)
+#elif (defined(OS_LINUX) && !defined(IS_CHROMECAST)) || defined(OS_BSD)
   // To respond to the timezone change properly, the default timezone
   // cache in ICU has to be populated on starting up.
   // See TimeZoneMonitorLinux::NotifyClientsFromImpl().
