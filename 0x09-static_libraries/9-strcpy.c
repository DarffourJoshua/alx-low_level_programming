#include "main.h"

/**
 * _strcpy - a function that copies a
 * string
 * @dest: destination parameter
 * @src: source parameter
 * Return: the character
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*start)
		*dest++ = *src++;

	return (start);
}
