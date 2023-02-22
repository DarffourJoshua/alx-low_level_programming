#include "main.h"

/**
 * print_last_digit - check description
 * @n: An integer value
 * description: A function that prints the last digit of a number
 * return: value of the last digit
 */

int print_last_digit(int n)
{
	int r = n % 10;

	if (r < 0)
	{
		r *= -1;
	}
	else
	{
		r = r;
	}
	_putchar (r + '0');
	return (r);
}
