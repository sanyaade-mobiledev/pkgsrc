# $NetBSD: Makefile,v 1.8 2012/11/29 02:42:10 wen Exp $

DISTNAME=	Moo-1.000006
PKGNAME=	p5-${DISTNAME}
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=../../authors/id/I/IL/ILMARI/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Moo/
COMMENT=	Minimalist Object Orientation (with Moose compatiblity)
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-Class-Method-Modifiers>=1.10:../../devel/p5-Class-Method-Modifiers
DEPENDS+=	p5-Devel-GlobalDestruction>=0.09:../../devel/p5-Devel-GlobalDestruction
DEPENDS+=	p5-Module-Runtime>=0.012:../../devel/p5-Module-Runtime
DEPENDS+=	p5-Role-Tiny>=1.002004:../../devel/p5-Role-Tiny
DEPENDS+=	p5-strictures>=1.001001:../../devel/p5-strictures

PERL5_PACKLIST=	auto/Moo/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
