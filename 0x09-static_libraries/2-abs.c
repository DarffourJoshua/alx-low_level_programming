#include "main.h"

/**
 * _abs - a function
 * @n: the parameter
 * Return: 1 if success, 0 if otherwise
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n *= -1);
}
