#include "main.h"

/**
 * is_prime_mumber - a function that returns 1
 * if the input integer is a prime number,
 * otherwise return 0
 * @n: integer value
 * Return On success, return 1, on error
 * return 0
 */


int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	else if (n <= 3)
		return (1);

	return (prime(n, 2));
}

/**
 * prime - checks for prime number
 * @num: integer number to be check
 * @i: the result of division
 * Return: 1 if succes, 0 if error
 */

int prime(int num, int i)
{
	if (num % i == 0)
		return (0);

	if (num / 2 == 1)
		return (1);

	return (prime(num, i + 1));
}
