#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: string parameter
 * Return: On success, return the number of string
 * On error, return 0
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));

	else
		return (0);
}
