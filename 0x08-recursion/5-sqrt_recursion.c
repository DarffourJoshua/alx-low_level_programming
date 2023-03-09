#include "main.h"

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number.
 * @n: integer value
 * Return: On success, return the result,
 * On error, return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_square(n, 1));
}

/**
 * _square - find the square root
 * @r: square root value
 * @p: previous value
 * Return: the square root
 */

int _square(int r, int p)
{
	if (p > r)
		return (-1);

	else if (p * p == r)
		return (p);
	else
		return (_square(r, p + 1));
}
