// Modified expat_config.h.in for DICOMSDL

#ifdef _MSC_VER

#include <memory.h>
#include <string.h>

#endif

/* #undef BIG_ENDIAN_MACHINE */
#ifdef BIG_ENDIAN_MACHINE
	#define BYTEORDER	4321
	#define WORDS_BIGENDIAN
#else
	#define BYTEORDER	1234
#endif

#define HAVE_MEMMOVE

#define XML_CONTEXT_BYTES 1024
#define XML_DTD 1
#define XML_NS 1
