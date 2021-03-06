$NetBSD: patch-directory_c-sdk_ldap_include_portable.h,v 1.9 2012/11/23 17:28:49 ryoon Exp $

--- ldap/sdks/c-sdk/ldap/include/portable.h.orig	2012-11-18 10:20:06.000000000 +0000
+++ ldap/sdks/c-sdk/ldap/include/portable.h
@@ -122,8 +122,11 @@
  * some systems don't have the BSD re_comp and re_exec routines
  */
 #ifndef NEED_BSDREGEX
-#if ( defined( SYSV ) || defined( NETBSD ) || defined( FREEBSD ) || defined(__OpenBSD__) || defined( linux ) || defined( DARWIN )) && !defined(sgi)
+#if ( defined( SYSV ) || defined( NETBSD ) || defined(DRAGONFLY) || defined( FREEBSD ) || defined(__OpenBSD__) || defined( linux ) || defined( DARWIN )) && !defined(sgi)
 #define NEED_BSDREGEX
+/* there are conflicting prototypes in unistd.h on DragonFly */
+#define re_comp ldap_compat_re_comp
+#define re_exec ldap_compat_re_exec
 #endif
 #endif
 
