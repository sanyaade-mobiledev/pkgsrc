# $NetBSD: Makefile,v 1.18 2012/10/08 09:20:57 asau Exp $
#

DISTNAME=	acidrip-0.14
PKGREVISION=	8
CATEGORIES=	multimedia
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=acidrip/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://untrepid.com/acidrip/
COMMENT=	Gtk2::Perl application for ripping and encoding DVDs

DEPENDS+=	lsdvd-[0-9]*:../../multimedia/lsdvd
DEPENDS+=	mencoder-[0-9]*:../../multimedia/mencoder
DEPENDS+=	mplayer-[0-9]*:../../multimedia/mplayer
DEPENDS+=	p5-gtk2>=1.040:../../x11/p5-gtk2

PERL5_PACKLIST= auto/AcidRip/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
