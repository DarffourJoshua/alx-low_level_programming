#include "main.h"

/**
 * _islower - a function to check for
 * lower characters
 * @c: string parameter
 * Return: 1 if success, 0 if otherewise
 */

int _islower(int c)
{
	char uppercase = 'A';
	int isUpper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isUpper = 1;
			break;
		}
	}
	return (1);
}
