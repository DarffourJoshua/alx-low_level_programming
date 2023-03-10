#include "main.h"

/**
 * _isdigit - a function that checks
 * for a digiit
 * @c: integer parameter
 * Return: 1 if succes, 0 if otherwise
 */

int _isdigit(int c)
{
	char digit = '0';
	int start = 0;

	for (; digit <= '9'; digit++)
	{
		if (c == digit)
		{
			start = 1;
			break;
		}
	}
	return (1);
}
