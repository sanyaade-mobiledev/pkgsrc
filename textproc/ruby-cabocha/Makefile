# $NetBSD: Makefile,v 1.4 2012/10/25 06:56:55 asau Exp $
#

.include "../../textproc/cabocha/Makefile.common"

PKGREVISION=	1
CATEGORIES+=	ruby

COMMENT=	CaboCha ruby module

BUILD_DEPENDS+=	swig-[0-9]*:../../devel/swig

USE_LANGUAGES=	c c++

USE_RUBY_EXTCONF=	yes
RUBY_EXTCONF_SUBDIRS=	ruby

CABOCHA_LIBS_CMD=	${BUILDLINK_PREFIX.cabocha}/bin/cabocha-config --libs

pre-configure:
	${RUN} cd ${WRKSRC}/swig; ${SETENV} ${CONFIGURE_ENV} make ruby;
	${SED} -e "s|@CABOCHA_LIBS@|`${CABOCHA_LIBS_CMD}`|g" \
		${WRKSRC}/ruby/extconf.rb.in > ${WRKSRC}/ruby/extconf.rb

BUILDLINK_API_DEPENDS.cabocha+=	cabocha>=${PKGVERSION_NOREV}

.include "../../textproc/cabocha/buildlink3.mk"
.include "../../lang/ruby/modules.mk"
.include "../../mk/bsd.pkg.mk"
