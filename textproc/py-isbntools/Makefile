# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD$

PORTNAME=	isbntools
PORTVERSION=	4.3.21
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	App and framework for all things about ISBN

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/LICENSE-LGPL-3.0-only.txt

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}isbnlib>=3.9.10<3.10.0:textproc/py-isbnlib@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.mk>
