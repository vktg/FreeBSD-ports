<<<<<<< HEAD
--- chrome/browser/policy/configuration_policy_handler_list_factory.cc.orig	2019-12-16 21:51:23 UTC
=======
--- chrome/browser/policy/configuration_policy_handler_list_factory.cc.orig	2020-03-03 18:53:51 UTC
>>>>>>> upstream/master
+++ chrome/browser/policy/configuration_policy_handler_list_factory.cc
@@ -117,7 +117,7 @@
 #endif
 
 #if defined(OS_WIN) || defined(OS_MACOSX) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 #include "chrome/browser/browser_switcher/browser_switcher_prefs.h"
 #endif
 
<<<<<<< HEAD
@@ -352,11 +352,11 @@ const PolicyToPreferenceMapEntry kSimplePolicyMap[] = 
     prefs::kSafeBrowsingSendFilesForMalwareCheck,
     base::Value::Type::INTEGER
   },
=======
@@ -357,11 +357,11 @@ const PolicyToPreferenceMapEntry kSimplePolicyMap[] = 
   { key::kWebComponentsV0Enabled,
     prefs::kWebComponentsV0Enabled,
     base::Value::Type::BOOLEAN },
>>>>>>> upstream/master
-#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS) || defined(OS_BSD)
   { key::kAuthNegotiateDelegateByKdcPolicy,
     prefs::kAuthNegotiateDelegateByKdcPolicy,
     base::Value::Type::BOOLEAN },
-#endif  // defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS)
+#endif  // defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 #if defined(OS_POSIX)
   { key::kNtlmV2Enabled,
     prefs::kNtlmV2Enabled,
<<<<<<< HEAD
@@ -1141,7 +1141,7 @@ const PolicyToPreferenceMapEntry kSimplePolicyMap[] = 
=======
@@ -1147,7 +1147,7 @@ const PolicyToPreferenceMapEntry kSimplePolicyMap[] = 
     prefs::kExternalProtocolDialogShowAlwaysOpenCheckbox,
>>>>>>> upstream/master
     base::Value::Type::BOOLEAN },
 #if defined(OS_WIN) || defined(OS_MACOSX) || \
-    (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+    (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   { key::kAlternativeBrowserPath,
     browser_switcher::prefs::kAlternativeBrowserPath,
     base::Value::Type::STRING },
<<<<<<< HEAD
@@ -1205,7 +1205,7 @@ const PolicyToPreferenceMapEntry kSimplePolicyMap[] = 
=======
@@ -1208,7 +1208,7 @@ const PolicyToPreferenceMapEntry kSimplePolicyMap[] = 
>>>>>>> upstream/master
     browser_switcher::prefs::kChromeParameters,
     base::Value::Type::LIST },
 #endif
-#if defined(OS_LINUX) || defined(OS_WIN) || defined(OS_MACOSX)
+#if defined(OS_LINUX) || defined(OS_WIN) || defined(OS_MACOSX) || defined(OS_BSD)
   { key::kBrowserGuestModeEnforced,
     prefs::kBrowserGuestModeEnforced,
     base::Value::Type::BOOLEAN },
