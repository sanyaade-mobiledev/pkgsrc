# $NetBSD: Makefile,v 1.50 2012/10/23 17:18:34 asau Exp $

DISTNAME=	libpcap-1.1.1
PKGREVISION=	1
SVR4_PKGNAME=	lpcap
CATEGORIES=	net
MASTER_SITES=	http://www.tcpdump.org/release/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.tcpdump.org/
COMMENT=	System-independent interface for user-level packet capture
LICENSE=	modified-bsd

NOT_FOR_PLATFORM+=	Interix-*-* # no raw interface access

PKG_INSTALLATION_TYPES=	overwrite pkgviews
INSTALLATION_DIRS=	bin

USE_LIBTOOL=		yes
USE_TOOLS+=		bison gm4 lex
GNU_CONFIGURE=		yes
PLIST_VARS+=		SunOS std

.include "../../mk/bsd.prefs.mk"

.if exists(/usr/include/netinet/ip6.h)
CONFIGURE_ARGS+=	--enable-ipv6
.endif

.if ${OPSYS} == "SunOS"
.if ${OS_VERSION} != "5.11"
CONFIGURE_ARGS+=	--with-pcap=dlpi
.endif
PLIST.SunOS=	yes
.else
PLIST.std=	yes
.endif

post-install:
	${INSTALL_DATA} ${WRKSRC}/pcap-int.h ${DESTDIR}${PREFIX}/include

.include "../../mk/bsd.pkg.mk"
