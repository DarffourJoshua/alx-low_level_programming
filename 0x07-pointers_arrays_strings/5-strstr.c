#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring.
 * @haystack: an input string to search in
 * @needle: an input string to locate into string haystack
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */


char *_strstr(char *haystack, char *needle)
{
	char  *startfr = needle, *startto = haystack;

	while (*haystack)
	{
		startto = haystack;
		needle = startfr;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = startto + 1;
	}
	return (NULL);
}
