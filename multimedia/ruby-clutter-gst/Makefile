# $NetBSD: Makefile,v 1.20 2012/10/08 23:02:12 adam Exp $
#

PKGNAME=		${RUBY_PKGPREFIX}-clutter-gst-${VERSION}
COMMENT=		Ruby binding for Clutter GStreamer library
PKGREVISION=		17
CATEGORIES=		multimedia

DEPENDS+=	${RUBY_PKGPREFIX}-clutter-core>=${VERSION}:../../graphics/ruby-clutter-core
DEPENDS+=	${RUBY_PKGPREFIX}-gnome2-gstreamer-[0-9]*:../../multimedia/ruby-gnome2-gstreamer

RUBY_EXTCONF_SUBDIRS=	clutter-gst
RUBY_VERSION_SUPPORTED= 18

USE_TOOLS+=	pkg-config

.include "../../devel/ruby-gnome2-glib/buildlink3.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../multimedia/clutter08-gst/buildlink3.mk"
.include "../../graphics/ruby-clutter/Makefile.common"
