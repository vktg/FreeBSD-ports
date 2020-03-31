<<<<<<< HEAD
--- gpu/ipc/service/gpu_init.cc.orig	2019-12-16 21:51:26 UTC
=======
--- gpu/ipc/service/gpu_init.cc.orig	2020-03-03 18:53:55 UTC
>>>>>>> upstream/master
+++ gpu/ipc/service/gpu_init.cc
@@ -109,7 +109,7 @@ void InitializePlatformOverlaySettings(GPUInfo* gpu_in
 #endif
 }
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS) && !defined(IS_CHROMECAST)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS) && !defined(IS_CHROMECAST)) || defined(OS_BSD)
 bool CanAccessNvidiaDeviceFile() {
   bool res = true;
   base::ScopedBlockingCall scoped_blocking_call(FROM_HERE,
@@ -120,7 +120,7 @@ bool CanAccessNvidiaDeviceFile() {
   }
   return res;
 }
-#endif  // OS_LINUX && !OS_CHROMEOS && !IS_CHROMECAST
+#endif  // (OS_LINUX && !OS_CHROMEOS && !IS_CHROMECAST) || OS_BSD
 
 class GpuWatchdogInit {
  public:
@@ -170,7 +170,7 @@ bool GpuInit::InitializeAndStartSandbox(base::CommandL
   gpu_info_.subpixel_font_rendering = true;
 #endif
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_LINUX) && !defined(OS_CHROMEOS)) || defined(OS_BSD)
   if (gpu_info_.gpu.vendor_id == 0x10de &&  // NVIDIA
       gpu_info_.gpu.driver_vendor == "NVIDIA" && !CanAccessNvidiaDeviceFile())
     return false;
@@ -254,7 +254,7 @@ bool GpuInit::InitializeAndStartSandbox(base::CommandL
   }
 
   bool attempted_startsandbox = false;
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) && !defined(OS_BSD)
   // On Chrome OS ARM Mali, GPU driver userspace creates threads when
   // initializing a GL context, so start the sandbox early.
   // TODO(zmo): Need to collect OS version before this.
@@ -263,7 +263,7 @@ bool GpuInit::InitializeAndStartSandbox(base::CommandL
         watchdog_thread_.get(), &gpu_info_, gpu_preferences_);
     attempted_startsandbox = true;
   }
-#endif  // defined(OS_LINUX)
+#endif  // defined(OS_LINUX) && !defined(OS_BSD)
 
   base::TimeTicks before_initialize_one_off = base::TimeTicks::Now();
 
<<<<<<< HEAD
@@ -280,14 +280,14 @@ bool GpuInit::InitializeAndStartSandbox(base::CommandL
=======
@@ -288,14 +288,14 @@ bool GpuInit::InitializeAndStartSandbox(base::CommandL
>>>>>>> upstream/master
   }
   if (gl_initialized && use_swiftshader &&
       gl::GetGLImplementation() != gl::kGLImplementationSwiftShaderGL) {
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
     VLOG(1) << "Quit GPU process launch to fallback to SwiftShader cleanly "
             << "on Linux";
     return false;
 #else
     gl::init::ShutdownGL(true);
     gl_initialized = false;
-#endif  // OS_LINUX
+#endif  // OS_LINUX || OS_BSD
   }
<<<<<<< HEAD
   if (!gl_initialized)
     gl_initialized = gl::init::InitializeGLNoExtensionsOneOff();
@@ -314,7 +314,7 @@ bool GpuInit::InitializeAndStartSandbox(base::CommandL
=======
 
   if (!gl_initialized) {
@@ -340,7 +340,7 @@ bool GpuInit::InitializeAndStartSandbox(base::CommandL
>>>>>>> upstream/master
           command_line, gpu_feature_info_,
           gpu_preferences_.disable_software_rasterizer, false);
       if (use_swiftshader) {
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
         VLOG(1) << "Quit GPU process launch to fallback to SwiftShader cleanly "
                 << "on Linux";
         return false;
<<<<<<< HEAD
@@ -326,7 +326,7 @@ bool GpuInit::InitializeAndStartSandbox(base::CommandL
=======
@@ -354,7 +354,7 @@ bool GpuInit::InitializeAndStartSandbox(base::CommandL
>>>>>>> upstream/master
               << "failed";
           return false;
         }
-#endif  // OS_LINUX
+#endif  // OS_LINUX || OS_BSD
       }
     } else {  // use_swiftshader == true
       switch (gpu_preferences_.use_vulkan) {
<<<<<<< HEAD
@@ -413,7 +413,7 @@ bool GpuInit::InitializeAndStartSandbox(base::CommandL
=======
@@ -410,7 +410,7 @@ bool GpuInit::InitializeAndStartSandbox(base::CommandL
>>>>>>> upstream/master
 
   InitializePlatformOverlaySettings(&gpu_info_);
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // Driver may create a compatibility profile context when collect graphics
   // information on Linux platform. Try to collect graphics information
   // based on core profile context after disabling platform extensions.
<<<<<<< HEAD
@@ -432,7 +432,7 @@ bool GpuInit::InitializeAndStartSandbox(base::CommandL
=======
@@ -429,7 +429,7 @@ bool GpuInit::InitializeAndStartSandbox(base::CommandL
>>>>>>> upstream/master
       return false;
     }
   }
-#endif  // defined(OS_LINUX)
+#endif  // defined(OS_LINUX) || defined(OS_BSD)
 
   if (use_swiftshader) {
     AdjustInfoToSwiftShader();
<<<<<<< HEAD
@@ -604,7 +604,7 @@ void GpuInit::InitializeInProcess(base::CommandLine* c
=======
@@ -608,7 +608,7 @@ void GpuInit::InitializeInProcess(base::CommandLine* c
>>>>>>> upstream/master
 
   InitializePlatformOverlaySettings(&gpu_info_);
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   // Driver may create a compatibility profile context when collect graphics
   // information on Linux platform. Try to collect graphics information
   // based on core profile context after disabling platform extensions.
<<<<<<< HEAD
@@ -624,7 +624,7 @@ void GpuInit::InitializeInProcess(base::CommandLine* c
=======
@@ -628,7 +628,7 @@ void GpuInit::InitializeInProcess(base::CommandLine* c
>>>>>>> upstream/master
       }
     }
   }
-#endif  // defined(OS_LINUX)
+#endif  // defined(OS_LINUX) || defined(OS_BSD)
 
   if (use_swiftshader) {
     AdjustInfoToSwiftShader();
