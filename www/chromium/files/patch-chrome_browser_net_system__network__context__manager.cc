<<<<<<< HEAD
--- chrome/browser/net/system_network_context_manager.cc.orig	2019-12-16 21:51:23 UTC
+++ chrome/browser/net/system_network_context_manager.cc
@@ -81,11 +81,11 @@
=======
--- chrome/browser/net/system_network_context_manager.cc.orig	2020-03-03 18:53:51 UTC
+++ chrome/browser/net/system_network_context_manager.cc
@@ -79,11 +79,11 @@
>>>>>>> upstream/master
 #include "chrome/browser/chromeos/policy/browser_policy_connector_chromeos.h"
 #endif  // defined(OS_CHROMEOS)
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 #include "chrome/common/chrome_paths_internal.h"
 #include "chrome/grit/chromium_strings.h"
 #include "ui/base/l10n/l10n_util.h"
-#endif  // defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#endif  // (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
 
<<<<<<< HEAD
 #if BUILDFLAG(ENABLE_EXTENSIONS)
 #include "extensions/common/constants.h"
@@ -209,10 +209,10 @@ network::mojom::HttpAuthDynamicParamsPtr CreateHttpAut
=======
 #if defined(OS_WIN) || defined(OS_MACOSX)
 #include "content/public/common/network_service_util.h"
@@ -211,10 +211,10 @@ network::mojom::HttpAuthDynamicParamsPtr CreateHttpAut
>>>>>>> upstream/master
   auth_dynamic_params->enable_negotiate_port =
       local_state->GetBoolean(prefs::kEnableAuthNegotiatePort);
 
-#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS) || defined(OS_BSD)
   auth_dynamic_params->delegate_by_kdc_policy =
       local_state->GetBoolean(prefs::kAuthNegotiateDelegateByKdcPolicy);
-#endif  // defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS)
+#endif  // defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 
 #if defined(OS_POSIX)
   auth_dynamic_params->ntlm_v2_enabled =
<<<<<<< HEAD
@@ -476,10 +476,10 @@ SystemNetworkContextManager::SystemNetworkContextManag
=======
@@ -480,10 +480,10 @@ SystemNetworkContextManager::SystemNetworkContextManag
>>>>>>> upstream/master
   pref_change_registrar_.Add(prefs::kEnableAuthNegotiatePort,
                              auth_pref_callback);
 
-#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS) || defined(OS_BSD)
   pref_change_registrar_.Add(prefs::kAuthNegotiateDelegateByKdcPolicy,
                              auth_pref_callback);
-#endif  // defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS)
+#endif  // defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 
 #if defined(OS_POSIX)
   pref_change_registrar_.Add(prefs::kNtlmV2Enabled, auth_pref_callback);
<<<<<<< HEAD
@@ -531,10 +531,10 @@ void SystemNetworkContextManager::RegisterPrefs(PrefRe
=======
@@ -535,10 +535,10 @@ void SystemNetworkContextManager::RegisterPrefs(PrefRe
>>>>>>> upstream/master
   registry->RegisterStringPref(prefs::kAuthServerWhitelist, std::string());
   registry->RegisterStringPref(prefs::kAuthNegotiateDelegateWhitelist,
                                std::string());
-#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS) || defined(OS_BSD)
   registry->RegisterBooleanPref(prefs::kAuthNegotiateDelegateByKdcPolicy,
                                 false);
-#endif  // defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS)
+#endif  // defined(OS_LINUX) || defined(OS_MACOSX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 
 #if defined(OS_POSIX)
   registry->RegisterBooleanPref(
<<<<<<< HEAD
@@ -645,7 +645,7 @@ void SystemNetworkContextManager::OnNetworkServiceCrea
=======
@@ -643,7 +643,7 @@ void SystemNetworkContextManager::OnNetworkServiceCrea
>>>>>>> upstream/master
       insecure_stub_resolver_enabled, secure_dns_mode,
       std::move(dns_over_https_servers));
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_BSD) || defined(OS_LINUX)) && !defined(OS_CHROMEOS)
   const base::CommandLine& command_line =
       *base::CommandLine::ForCurrentProcess();
 
