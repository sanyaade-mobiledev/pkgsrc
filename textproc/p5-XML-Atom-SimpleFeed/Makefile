# $NetBSD: Makefile,v 1.14 2012/10/25 06:56:33 asau Exp $

DISTNAME=	XML-Atom-SimpleFeed-0.86
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	3
SVR4_PKGNAME=	p5xas
CATEGORIES=	textproc perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=XML/}

MAINTAINER=	kleink@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/XML-Atom-SimpleFeed/
COMMENT=	Generate simple Atom syndication feeds
LICENSE=	${PERL5_LICENSE}

PERL5_PACKLIST=		auto/XML/Atom/SimpleFeed/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
