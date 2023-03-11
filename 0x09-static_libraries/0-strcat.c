#include "main.h"

/**
 * _strncat - a function that concatenate strings
 * @dest: add to parameter string
 * @src: add from parameter string
 * Return: the character
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i= 0;
	char *end = dest, *start = src;

	while(*src)
	{
		len++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > len)
		n = len;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';

	return (end);
}
