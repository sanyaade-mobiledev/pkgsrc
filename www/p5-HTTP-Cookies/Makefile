# $NetBSD: Makefile,v 1.7 2012/10/28 06:30:40 asau Exp $

DISTNAME=	HTTP-Cookies-6.01
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=HTTP/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/HTTP-Cookies/
COMMENT=	HTTP cookie jars
LICENSE=	${PERL5_LICENSE}

CONFLICTS+=	p5-libwww<6.00

DEPENDS+=	p5-HTTP-Message>=6.02:../../www/p5-HTTP-Message
DEPENDS+=	p5-HTTP-Date>=6:../../www/p5-HTTP-Date

PERL5_PACKLIST=		auto/HTTP/Cookies/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
