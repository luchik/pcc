/*
 * Config file for visual studio build
 */
#define PREPROCESSOR "cpp.exe"
#define ASSEMBLER "yasm.exe -p gnu -f win32"
#define COMPILER "ccom.exe"
#define LINKER "link.exe"
#define PECOFF

#define STDINC "C:/pcc/include"
#define LIBDIR "C:/pcc/lib"

#if !defined(vsnprintf)
#define vsnprintf _vsnprintf
#endif

#if !defined(snprintf)
#define snprintf _snprintf
#endif

#ifndef STDERR_FILENO
#define STDERR_FILENO 2
#endif

#define inline __inline

typedef long intptr_t;

#define HAVE_ALLOCA 1
#define alloca(x) _alloca(x)
//#define HAVE_ALLOCA_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_MEMORY_H 1
//#define HAVE_MKSTEMP 1
//#define HAVE_STDINT_H 1
#define HAVE_STDLIB_H 1
//#define HAVE_STRINGS_H 1
#define HAVE_STRING_H 1
//#define HAVE_STRLCAT 1
//#define HAVE_STRLCPY 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TYPES_H 1
// #define HAVE_UNISTD_H 1
//#define HOST_BIG_ENDIAN 
#define HOST_LITTLE_ENDIAN
#define ISFLEX 1

#define PACKAGE_NAME "pcc"
#define PACKAGE_STRING "pcc 0.9.9"
#define PACKAGE_TARNAME "pcc"
#define PACKAGE_VERSION "0.9.9"
#define PCC_MAJOR 0
#define PCC_MINOR 9
#define PCC_MINORMINOR 9
#define STDC_HEADERS 1
#define TARGET_LITTLE_ENDIAN 1
//#define TARGOS win32
#define VERSSTR "pcc 0.9.9 for win32, greg@sparky Mon Apr 14 10:47:33 EST 2008"
#define YYTEXT_POINTER 1