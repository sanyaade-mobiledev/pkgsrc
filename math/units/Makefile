# $NetBSD: Makefile,v 1.8 2012/12/06 11:42:20 jperkin Exp $

DISTNAME=	units-2.01
CATEGORIES=	math
MASTER_SITES=	${MASTER_SITE_GNU:=units/}

MAINTAINER=	cameron@patrick.wattle.id.au
HOMEPAGE=	http://www.gnu.org/software/units/
COMMENT=	GNU Units - a calculator capable of performing unit conversions
LICENSE=	gnu-gpl-v3

.include "../../mk/bsd.prefs.mk"

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--program-prefix=g
INFO_FILES=	yes

INSTALLATION_DIRS=	gnu/bin

REPLACE_PYTHON=	units_cur

post-install:
	${LN} -sf ${PREFIX}/bin/gunits ${DESTDIR}${PREFIX}/${PKGGNUDIR}bin/units

.include "../../devel/readline/buildlink3.mk"
.include "../../lang/python/application.mk"
.include "../../mk/bsd.pkg.mk"
