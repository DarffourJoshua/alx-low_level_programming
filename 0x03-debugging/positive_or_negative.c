#include <stdio.h>

/**
 * positive_or_negative - check the description
 * @n: An interger value
 * Description: A funtion to check whether a number
 * is positive or negative
 * return: Always 0
 */

int positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive \n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero \n", n);
	}
	else
	{
		printf("%d is negative \n", n);
	}
	return (0);
}
