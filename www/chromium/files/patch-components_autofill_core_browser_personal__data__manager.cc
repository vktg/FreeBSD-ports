<<<<<<< HEAD
--- components/autofill/core/browser/personal_data_manager.cc.orig	2019-12-16 21:51:25 UTC
+++ components/autofill/core/browser/personal_data_manager.cc
@@ -1819,10 +1819,10 @@ bool PersonalDataManager::IsServerCard(const CreditCar
=======
--- components/autofill/core/browser/personal_data_manager.cc.orig	2020-03-03 18:53:53 UTC
+++ components/autofill/core/browser/personal_data_manager.cc
@@ -1816,10 +1816,10 @@ bool PersonalDataManager::IsServerCard(const CreditCar
>>>>>>> upstream/master
 
 bool PersonalDataManager::ShouldShowCardsFromAccountOption() const {
 // The feature is only for Linux, Windows and Mac.
-#if (!defined(OS_LINUX) && !defined(OS_WIN) && !defined(OS_MACOSX)) || \
+#if (!defined(OS_LINUX) && !defined(OS_WIN) && !defined(OS_MACOSX) && !defined(OS_BSD)) || \
     defined(OS_CHROMEOS)
   return false;
-#endif  // (!defined(OS_LINUX) && !defined(OS_WIN) && !defined(OS_MACOSX)) ||
+#endif  // (!defined(OS_LINUX) && !defined(OS_WIN) && !defined(OS_MACOSX) && !defined(OS_BSD)) ||
         // defined(OS_CHROMEOS)
 
   // This option should only be shown for users that have not enabled the Sync
