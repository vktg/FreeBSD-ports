# $FreeBSD$

PORTNAME=	caronade
DISTVERSIONPREFIX=v
<<<<<<< HEAD
DISTVERSION=	0.2.0
PORTREVISION=	1
=======
DISTVERSION=	0.3.0
>>>>>>> upstream/master
CATEGORIES=	ports-mgmt

MAINTAINER=	decke@FreeBSD.org
COMMENT=	Small and light tool to help with FreeBSD Ports CI

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go:modules
USE_RC_SUBR=	caronade

USE_GITHUB=	yes
GH_ACCOUNT=	decke

GH_TUPLE=	NYTimes:gziphandler:v1.1.1:nytimes_gziphandler/vendor/github.com/NYTimes/gziphandler \
<<<<<<< HEAD
		go-yaml:yaml:v2.2.2:go_yaml_yaml/vendor/gopkg.in/yaml.v2
=======
		go-yaml:yaml:v2.2.4:go_yaml_yaml/vendor/gopkg.in/yaml.v2
>>>>>>> upstream/master

post-install:
		${MKDIR} ${STAGEDIR}${ETCDIR}
		${INSTALL_DATA} ${WRKSRC}/caronade.yaml ${STAGEDIR}${ETCDIR}/caronade.yaml.sample

		${MKDIR} ${STAGEDIR}${PREFIX}/${PORTNAME}
		(cd ${WRKSRC} && ${COPYTREE_SHARE} "static templates work" ${STAGEDIR}${PREFIX}/${PORTNAME})

		${MKDIR} ${STAGEDIR}${PREFIX}/${PORTNAME}/builds

.include <bsd.port.mk>
