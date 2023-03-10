#include "main.h"

/**
 * _isupper - a function to check whether
 * a string is uppercase
 * @c: integer string
 * Return: 1 if succes, 0 if otherwise
 */

int _isupper(int c)
{
	char isUpper = 'A';
	int start = 0;

	for (; isUpper <= 'Z'; isUpper++)
	{
		if (c == isUpper)
		{
			start = 1;
			break;
		}
	}
	return (1);
}
