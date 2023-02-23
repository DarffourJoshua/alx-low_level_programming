#include "main.h"



/**
 * format_it - check the description
 * @k: An interger value
 * Description: A function to format the
 * time table function
 * return: nothing
 */


void format_it(int k)
{
	if (k <= 9)
	{
		_putchar (',');
		_putchar (32);
		_putchar (32);
		_putchar (32);
		_putchar (k + '0');
	}
	else if (k > 9 && k <= 99)
	{
		_putchar (',');
		_putchar (32);
		_putchar (32);
		_putchar ((k / 10) + '0');
		_putchar (k % 10 + '0');
	}
	else
	{
			_putchar (',');
			_putchar (32);
			_putchar (k / 100 + '0');
			_putchar ((k / 10) % 10 + '0');
			_putchar (k % 10 + '0');
	}
}

/**
 * print_time_table - check description
 * @n: an integer value
 * Description: A function that prints the n times table, starting with 0
 * return: Nothing
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar ('0');
			for (j = i + 1; j <= n; j++)
				format_it(i * j);
			_putchar ('\n');
		}
	}
}

