#ifndef __CARES_BUILD_H
#define __CARES_BUILD_H
/*
 * Copyright (C) The c-ares project and its contributors
 * SPDX-License-Identifier: MIT
 *
 * Hand-maintained for Android/bionic (Soong build).
 */

#define CARES_TYPEOF_ARES_SOCKLEN_T socklen_t
#define CARES_TYPEOF_ARES_SSIZE_T   ssize_t

#define CARES_HAVE_SYS_TYPES_H
#define CARES_HAVE_SYS_SOCKET_H
#define CARES_HAVE_SYS_SELECT_H
#define CARES_HAVE_ARPA_NAMESER_H
#define CARES_HAVE_ARPA_NAMESER_COMPAT_H

#ifdef CARES_HAVE_SYS_TYPES_H
#  include <sys/types.h>
#endif

#ifdef CARES_HAVE_SYS_SOCKET_H
#  include <sys/socket.h>
#endif

#ifdef CARES_HAVE_SYS_SELECT_H
#  include <sys/select.h>
#endif

#endif /* __CARES_BUILD_H */
