--- src/tls/tls_certkey.c.orig	2019-03-07 23:57:10 UTC
+++ src/tls/tls_certkey.c
@@ -144,7 +144,7 @@ static void init_pem_load_state(pem_load
 
 /* use_chain - load cert, key and chain into ctx or ssl */
 
-#if OPENSSL_VERSION_NUMBER >= 0x1010100fUL
+#if OPENSSL_VERSION_NUMBER >= 0x1010100fUL && !defined(LIBRESSL_VERSION_NUMBER)
 static int use_chain(pem_load_state_t *st)
 {
     int     ret;
