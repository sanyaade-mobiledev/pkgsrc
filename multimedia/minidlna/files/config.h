/* $NetBSD: config.h,v 1.1 2012/10/15 22:48:01 drochner Exp $ */

/* MiniDLNA Project
 * http://sourceforge.net/projects/minidlna/
 * (c) 2008-2009 Justin Maggard
 * generated by ./genconfig.sh on �� 13 ��� 2010 00:06:49 EDT */
#ifndef __CONFIG_H__
#define __CONFIG_H__

#define PFRULE_INOUT_COUNTS
#define OS_NAME		OS
#define OS_VERSION	OS "/" OSVERSION
#define OS_URL		"http://www." OS ".org/"

/* full path of the file database */
#define DEFAULT_DB_PATH	"/var/db/minidlna"
#define DEFAULT_LOG_PATH	"/var/log"

/* Comment the following line to use home made daemonize() func instead
 * of BSD daemon() */
#define USE_DAEMON

/* Enable if the system inotify.h exists.  Otherwise our own inotify.h will be used. */
/*#define HAVE_INOTIFY_H*/

/* Enable if the system iconv.h exists.  ID3 tag reading in various character sets will not work properly otherwise. */
#define HAVE_ICONV_H

/* Enable NETGEAR-specific tweaks. */
/*#define NETGEAR*/
/* Enable ReadyNAS-specific tweaks. */
/*#define READYNAS*/
/* Compile in TiVo support. */
/* #define TIVO_SUPPORT -- not yet ported to FreeBSD */

#endif