<<<<<<< HEAD
--- chrome/browser/profiles/profile_attributes_entry.cc.orig	2019-12-16 21:51:23 UTC
+++ chrome/browser/profiles/profile_attributes_entry.cc
@@ -102,7 +102,7 @@ void ProfileAttributesEntry::Initialize(ProfileInfoCac
=======
--- chrome/browser/profiles/profile_attributes_entry.cc.orig	2020-03-03 18:53:51 UTC
+++ chrome/browser/profiles/profile_attributes_entry.cc
@@ -115,7 +115,7 @@ void ProfileAttributesEntry::Initialize(ProfileInfoCac
>>>>>>> upstream/master
   if (is_force_signin_enabled_) {
     if (!IsAuthenticated())
       is_force_signin_profile_locked_ = true;
-#if defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_WIN)
+#if defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_WIN) || defined(OS_BSD)
   } else if (IsSigninRequired()) {
     // Profiles that require signin in the absence of an enterprise policy are
     // left-overs from legacy supervised users. Just unlock them, so users can
