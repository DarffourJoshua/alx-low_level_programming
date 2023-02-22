#include "main.h"

/**
 * print_sign - check the code
 * @n: An input number
 * Description: This function prints the sign of the number
 * return: 1 if number greater than 0, 0 if n is zero, -1 if n if less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}

	else
	{
		_putchar ('-');
		return (-1);
	}

	return (0);
}
