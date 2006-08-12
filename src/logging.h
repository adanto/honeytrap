/* logging.h
 * Copyright (C) 2005 Tillmann Werner <tillmann.werner@gmx.de>
 *
 * This file is free software; as a special exception the author gives
 * unlimited permission to copy and/or distribute it, with or without
 * modifications, as long as this notice is preserved.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY, to the extent permitted by law; without even the
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef __HONEYTRAP_LOGGING_H
#define __HONEYTRAP_LOGGING_H 1

#include <time.h>
#include <fcntl.h>
#include <sys/types.h>

#define	LOG_OFF		0
#define LOG_ERR		1
#define LOG_WARN	2
#define LOG_NOTICE	3	/* default */
#define LOG_INFO	4
#define LOG_NOISY	5
#define LOG_DEBUG	6

#define LOGLINE_SIZE	256	/* truncates longer lines */

char ltime[20];
u_char log_level;

int logfile_fd;

char *log_time(char ltime[20]);
void logmsg(int level, int add_time, const char * format, ...) __attribute__ ((format (printf, 3, 4)));

#endif