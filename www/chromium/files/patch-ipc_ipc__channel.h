<<<<<<< HEAD
--- ipc/ipc_channel.h.orig	2019-12-16 21:51:27 UTC
+++ ipc/ipc_channel.h
@@ -280,7 +280,7 @@ class COMPONENT_EXPORT(IPC) Channel : public Sender {
=======
--- ipc/ipc_channel.h.orig	2020-03-03 18:53:55 UTC
+++ ipc/ipc_channel.h
@@ -282,7 +282,7 @@ class COMPONENT_EXPORT(IPC) Channel : public Sender {
>>>>>>> upstream/master
   static std::string GenerateUniqueRandomChannelID();
 #endif
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // Sandboxed processes live in a PID namespace, so when sending the IPC hello
   // message from client to server we need to send the PID from the global
   // PID namespace.
