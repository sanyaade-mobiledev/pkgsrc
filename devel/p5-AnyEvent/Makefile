# $NetBSD: Makefile,v 1.27 2012/10/31 11:17:37 asau Exp $

DISTNAME=	AnyEvent-6.14
PKGNAME=	p5-AnyEvent-6.130
PKGREVISION=	1
CATEGORIES=	devel
#MASTER_SITES=	http://www.cpan.org/modules/by-authors/Marc_Lehmann/
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=../../authors/id/M/ML/MLEHMANN/}

MAINTAINER=	rhaen@NetBSD.org
HOMEPAGE=	http://software.schmorp.de/pkg/AnyEvent.html
COMMENT=	Simple API for io, timer and completion callbacks
LICENSE=	${PERL5_LICENSE}

PERL5_PACKLIST=	auto/AnyEvent/.packlist

# 	  Task::Weaken in perl 5.14
DEPENDS+= p5-Net-SSLeay>=1.33:../../security/p5-Net-SSLeay
DEPENDS+= p5-JSON>=2.09:../../converters/p5-JSON
DEPENDS+= p5-JSON-XS>=2.200:../../converters/p5-JSON-XS
DEPENDS+= p5-EV>=4:../../devel/p5-EV
DEPENDS+= p5-Guard>=1.020:../../devel/p5-Guard
DEPENDS+= p5-Async-Interrupt>=1:../../devel/p5-Async-Interrupt

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
