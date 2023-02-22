#include "main.h"

/**
 * _abs - Entry point
 *@n: An integer value
 *Description: This function returns absolute value of a number
 *return: Absolut value of number n
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
		return (n * -1);
}
