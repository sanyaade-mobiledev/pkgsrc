# $NetBSD: Makefile,v 1.7 2012/10/28 06:30:47 asau Exp $

DISTNAME=	Net-HTTP-6.03
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	www perl5 net
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Net/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Net-HTTP/
COMMENT=	Perl 5 module for low-level HTTP connections (client)
LICENSE=	${PERL5_LICENSE}

CONFLICTS+=	p5-libwww<6.00

USE_LANGUAGES=	# empty
PERL5_PACKLIST= auto/Net/HTTP/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
