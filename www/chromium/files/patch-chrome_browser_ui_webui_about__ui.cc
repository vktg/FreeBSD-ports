<<<<<<< HEAD
--- chrome/browser/ui/webui/about_ui.cc.orig	2019-12-16 21:51:24 UTC
=======
--- chrome/browser/ui/webui/about_ui.cc.orig	2020-03-03 18:53:52 UTC
>>>>>>> upstream/master
+++ chrome/browser/ui/webui/about_ui.cc
@@ -561,7 +561,7 @@ std::string ChromeURLs() {
   return html;
 }
 
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
 std::string AboutLinuxProxyConfig() {
   std::string data;
   AppendHeader(&data, 0,
<<<<<<< HEAD
@@ -616,7 +616,7 @@ void AboutUIHTMLSource::StartDataRequest(
       response =
           ui::ResourceBundle::GetSharedInstance().DecompressDataResource(idr);
=======
@@ -617,7 +617,7 @@ void AboutUIHTMLSource::StartDataRequest(
       response =
           ui::ResourceBundle::GetSharedInstance().LoadDataResourceString(idr);
>>>>>>> upstream/master
     }
-#if defined(OS_LINUX) || defined(OS_OPENBSD)
+#if defined(OS_LINUX) || defined(OS_BSD)
   } else if (source_name_ == chrome::kChromeUILinuxProxyConfigHost) {
     response = AboutLinuxProxyConfig();
 #endif
