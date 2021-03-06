# $NetBSD: Makefile,v 1.36 2012/10/31 11:16:34 asau Exp $
#

DISTNAME=	allegro-4.4.2
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=alleg/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://alleg.sourceforge.net/
COMMENT=	Allegro game programming library
#LICENSE=	# TODO: (see mk/license.mk)

USE_CMAKE=	yes
USE_TOOLS+=	pkg-config makeinfo
USE_LANGUAGES=	c c++

INFO_FILES=	yes
CMAKE_ARGS+=	-DINFODIR=${PKGINFODIR:Q}

.include "../../mk/bsd.prefs.mk"

.if ${OPSYS} == "NetBSD"
SUBST_CLASSES+=		ossmidi
SUBST_STAGE.ossmidi=	pre-configure
SUBST_MESSAGE.ossmidi=	NetBSD's OSS midi emulation is non-existent.
SUBST_FILES.ossmidi=	CMakeLists.txt
SUBST_SED.ossmidi=	-e 's/ALLEGRO_WITH_OSSMIDI 1/ALLEGRO_WITH_OSSMIDI 0/'
.endif

PKGCONFIG_OVERRIDE+=	misc/logg.pc.in
PKGCONFIG_OVERRIDE+=	misc/loadpng.pc.in
PKGCONFIG_OVERRIDE+=	misc/allegrogl.pc.in
PKGCONFIG_OVERRIDE+=	misc/jpgalleg.pc.in
PKGCONFIG_OVERRIDE+=	misc/allegro.pc.in

.include "../../audio/libvorbis/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../graphics/glu/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../mk/oss.buildlink3.mk"
.include "../../mk/pthread.buildlink3.mk"
.include "../../multimedia/libogg/buildlink3.mk"
.include "../../x11/libICE/buildlink3.mk"
.include "../../x11/libSM/buildlink3.mk"
.include "../../x11/libX11/buildlink3.mk"
.include "../../x11/libXcursor/buildlink3.mk"
.include "../../x11/libXext/buildlink3.mk"
.include "../../x11/libXpm/buildlink3.mk"
.include "../../x11/libXxf86dga/buildlink3.mk"
.include "../../x11/libXxf86vm/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
