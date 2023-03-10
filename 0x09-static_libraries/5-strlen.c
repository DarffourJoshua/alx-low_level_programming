#include "main.h"

/**
 * _strlen - a function to count
 * the length of a string
 * @s: string parameter
 * Return: 1 if success, 0 if otherwise
 */

int _strlen(char *s)
{
	int count = 0;

	while(s[count] != '\0')
	{
		count++;
	}
	return (count);
}
