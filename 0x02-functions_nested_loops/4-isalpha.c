#include "main.h"

/**
 * _isalpha - Check the code.
 * @c: An input character.
 * Description: A function that checks for alphabetic character.
 * return: 1 if is a letter, lowercase or uppercase, 0 if otherwise
 */

int _isalpha(int c)
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}

	for (j = 'A'; j <= 'Z'; j++)
	{
		if (j == c)
			return (1);
	}

	return (0);
}
