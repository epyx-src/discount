/*
 * configuration for markdown, generated Wed Nov 30 16:33:44 CET 2011
 * by creynaud@Claires-MacBook-Pro.local
 */
#ifndef __AC_MARKDOWN_D
#define __AC_MARKDOWN_D 1


#define OS_DARWIN 1
#define USE_DISCOUNT_DL 1
#define DWORD unsigned int
#define WORD unsigned short
#define BYTE unsigned char
#define HAVE_PWD_H 1
#define HAVE_GETPWUID 1
#define HAVE_SRANDOM 1
#define INITRNG(x) srandom((unsigned int)x)
#define HAVE_BZERO 1
#define HAVE_RANDOM 1
#define COINTOSS() (random()&1)
#define HAVE_STRCASECMP 1
#define HAVE_STRNCASECMP 1
#define HAVE_FCHDIR 1
#define TABSTOP 4
#define PATH_FIND "/usr/bin/find"
#define PATH_SED "/usr/bin/sed"

#endif/* __AC_MARKDOWN_D */
