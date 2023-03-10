#include "main.h"

/**
 * _puts - a function that prints a
 * string followed by a new line
 * @s: string parameter
 * Return: 1 if success, 0 if otherwise
 */

void _puts(char *s)
{
	int c = 0;
	
	while (s[c] != '\0')
	{
		_putchar(s[c]);
		c++;
	}
	_putchar('\n');
}
