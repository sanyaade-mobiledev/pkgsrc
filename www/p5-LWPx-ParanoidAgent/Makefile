# $NetBSD: Makefile,v 1.7 2012/10/28 06:30:47 asau Exp $
#

DISTNAME=	LWPx-ParanoidAgent-1.07
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	3
CATEGORIES=	www perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=LWPx/}

MAINTAINER=	heinz@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/LWPx-ParanoidAgent/
COMMENT=	Subclass of module LWP::UserAgent that protects you from harm
LICENSE=	${PERL5_LICENSE}

DEPENDS+=		p5-libwww-[0-9]*:../../www/p5-libwww
DEPENDS+=		p5-Net-DNS-[0-9]*:../../net/p5-Net-DNS

PERL5_PACKLIST=		auto/LWPx/ParanoidAgent/.packlist
USE_LANGUAGES=		# none

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
