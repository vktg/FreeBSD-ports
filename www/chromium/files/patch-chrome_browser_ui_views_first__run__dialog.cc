<<<<<<< HEAD
--- chrome/browser/ui/views/first_run_dialog.cc.orig	2019-12-16 21:51:24 UTC
+++ chrome/browser/ui/views/first_run_dialog.cc
@@ -115,8 +115,10 @@ std::unique_ptr<views::View> FirstRunDialog::CreateExt
=======
--- chrome/browser/ui/views/first_run_dialog.cc.orig	2020-03-03 18:53:52 UTC
+++ chrome/browser/ui/views/first_run_dialog.cc
@@ -119,8 +119,10 @@ void FirstRunDialog::Done() {
>>>>>>> upstream/master
 bool FirstRunDialog::Accept() {
   GetWidget()->Hide();
 
+#if !defined(OS_BSD)
   ChangeMetricsReportingStateWithReply(report_crashes_->GetChecked(),
                                        base::Bind(&InitCrashReporterIfEnabled));
+#endif
 
   if (make_default_->GetChecked())
     shell_integration::SetAsDefaultBrowser();
