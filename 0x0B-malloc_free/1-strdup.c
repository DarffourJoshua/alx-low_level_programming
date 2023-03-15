#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: a string input
 * Return: On success, the _strdup function returns
 * a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *c, *dest;
	int i = 0, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	dest = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = dest;
	c = malloc(sizeof(char) * (len + 1));
	dest = c;

	if (c != NULL)
	{
		for (; i < len; i++)
		{
			c[i] = *str;
			str++;
		}
		c[i] = '\0';
		return (dest);
	}
	else
		return (NULL);
}
