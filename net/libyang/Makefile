# $FreeBSD$

PORTNAME=	libyang
PORTVERSION=	1.0.130
DISTVERSIONPREFIX=	v
CATEGORIES=	net

MAINTAINER=	olivier@FreeBSD.org
COMMENT=	YANG data modeling language library

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libpcre.so:devel/pcre

USES=	cmake compiler:c++11-lang pkgconfig
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	CESNET

CMAKE_ARGS+=	-DENABLE_LYD_PRIV=ON

.include <bsd.port.mk>
