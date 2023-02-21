#include "main.h"

/**
 * _islower: check the code
 *
 *@c - an input checker
 *
 * Description: A function to check for lowercase character
 *
 * Return: 1 if c is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
