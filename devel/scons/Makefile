# Created by: Peter Haight <peterh@sapros.com>
# $FreeBSD$

PORTNAME=	scons
<<<<<<< HEAD
PORTVERSION=	3.0.4
=======
PORTVERSION=	3.1.1
>>>>>>> upstream/master
CATEGORIES=	devel python
MASTER_SITES=	SF

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Build tool alternative to make

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	gm4:devel/m4

<<<<<<< HEAD
USES=		python shebangfix
SHEBANG_FILES=	script/scons*
USE_PYTHON=	distutils autoplist
=======
USES=		python:2.7 shebangfix
USE_PYTHON=	autoplist distutils

>>>>>>> upstream/master
NO_ARCH=	yes

PLIST_SUB=	SCONS_VER=${PORTVERSION}

SHEBANG_FILES=	script/scons*

post-patch:
	@${REINPLACE_CMD} -e 's|distutils\(\.command\.install\)$$|setuptools\1|; s|distutils\(\.command\.install\.\)|setuptools\1|' ${WRKSRC}/setup.py
	@${FIND} ${WRKSRC} -name '*.orig' -delete

.include <bsd.port.mk>
