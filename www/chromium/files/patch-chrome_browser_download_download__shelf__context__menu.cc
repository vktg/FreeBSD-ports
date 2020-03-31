<<<<<<< HEAD
--- chrome/browser/download/download_shelf_context_menu.cc.orig	2019-12-16 21:51:23 UTC
+++ chrome/browser/download/download_shelf_context_menu.cc
@@ -135,7 +135,7 @@ base::string16 DownloadShelfContextMenu::GetLabelForCo
=======
--- chrome/browser/download/download_shelf_context_menu.cc.orig	2020-03-03 18:53:51 UTC
+++ chrome/browser/download/download_shelf_context_menu.cc
@@ -137,7 +137,7 @@ base::string16 DownloadShelfContextMenu::GetLabelForCo
>>>>>>> upstream/master
                    : IDS_DOWNLOAD_MENU_PLATFORM_OPEN_ALWAYS;
           break;
         }
-#elif defined(OS_MACOSX) || defined(OS_LINUX)
+#elif defined(OS_MACOSX) || defined(OS_LINUX) || defined(OS_BSD)
         if (can_open_pdf_in_system_viewer) {
           id = IDS_DOWNLOAD_MENU_PLATFORM_OPEN_ALWAYS;
           break;
