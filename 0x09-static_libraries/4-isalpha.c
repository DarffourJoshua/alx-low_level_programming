#include "main.h"

/**
 * _isalpha - a function to check
 * wherther the string is alphabetic
 * @c: the string parameter
 * Return: 1 if success, 0 if otherwise
 */

int _isalpha(int c)
{
	char isLower = 'a', isUpper = 'A';
	int start = 0;

	for (; isLower <= 'z'; isLower++)
	{
		for (; isUpper <= 'Z'; isUpper++)
		{
			if (c == isLower || c == isUpper)
				start = 1;
			break;
		}
	}
	return (1);
}
