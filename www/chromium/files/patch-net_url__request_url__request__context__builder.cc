<<<<<<< HEAD
--- net/url_request/url_request_context_builder.cc.orig	2019-12-16 21:51:27 UTC
+++ net/url_request/url_request_context_builder.cc
@@ -496,7 +496,7 @@ std::unique_ptr<URLRequestContext> URLRequestContextBu
=======
--- net/url_request/url_request_context_builder.cc.orig	2020-03-03 18:53:55 UTC
+++ net/url_request/url_request_context_builder.cc
@@ -508,7 +508,7 @@ std::unique_ptr<URLRequestContext> URLRequestContextBu
>>>>>>> upstream/master
   }
 
   if (!proxy_resolution_service_) {
-#if !defined(OS_LINUX) && !defined(OS_ANDROID)
+#if !defined(OS_LINUX) && !defined(OS_ANDROID) && !defined(OS_BSD)
     // TODO(willchan): Switch to using this code when
     // ProxyResolutionService::CreateSystemProxyConfigService()'s signature
     // doesn't suck.
<<<<<<< HEAD
@@ -505,7 +505,7 @@ std::unique_ptr<URLRequestContext> URLRequestContextBu
=======
@@ -517,7 +517,7 @@ std::unique_ptr<URLRequestContext> URLRequestContextBu
>>>>>>> upstream/master
           ProxyResolutionService::CreateSystemProxyConfigService(
               base::ThreadTaskRunnerHandle::Get().get());
     }
-#endif  // !defined(OS_LINUX) && !defined(OS_ANDROID)
+#endif  // !defined(OS_LINUX) && !defined(OS_ANDROID) && !defined(OS_BSD)
     proxy_resolution_service_ = CreateProxyResolutionService(
         std::move(proxy_config_service_), context.get(),
         context->host_resolver(), context->network_delegate(),
