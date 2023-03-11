#include "main.h"

/**
 * _strncpy - a function that copies
 * string from one place to the other
 * @dest: destination parameter
 * @src: source parameter
 * Return: the character
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *start = src, *end = dest;
	int len = 0, i = 0;

	while(*src)
	{
		len++;
		src++;
	}

	len += 1;
	
	if (n > len)
		n = len;

	src = start;

	for (; i < n; i++)
	{
		*dest++ = *src++;
	}

	return (end);
}
