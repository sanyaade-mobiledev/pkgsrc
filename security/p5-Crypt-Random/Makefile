# $NetBSD: Makefile,v 1.20 2012/10/23 18:16:43 asau Exp $
#

DISTNAME=		Crypt-Random-1.25
PKGNAME=		p5-${DISTNAME}
PKGREVISION=		4
SVR4_PKGNAME=		p5cra
CATEGORIES=		security perl5
MASTER_SITES=		${MASTER_SITE_PERL_CPAN:=Crypt/}

MAINTAINER=		heinz@NetBSD.org
HOMEPAGE=		http://search.cpan.org/dist/Crypt-Random/
COMMENT=		Perl5 interface to /dev/random

DEPENDS+=		p5-Class-Loader>=2.00:../../devel/p5-Class-Loader
DEPENDS+=		p5-Math-Pari>=2.001804:../../math/p5-Math-Pari

PKG_INSTALLATION_TYPES=	overwrite pkgviews

USE_LANGUAGES=		# empty
PERL5_PACKLIST=		auto/Crypt/Random/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
