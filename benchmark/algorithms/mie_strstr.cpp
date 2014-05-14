/*
	require https://github.com/herumi/xbyak
*/
#define XBYAK_NO_OP_NAMES
#include "mie/string.hpp"

extern "C" char *mie_strstr(const char *haystack, const char *needle)
{
	return const_cast<char*>(mie::strstr(haystack, needle));
}
