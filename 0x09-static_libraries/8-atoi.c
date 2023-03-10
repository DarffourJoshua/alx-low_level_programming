#include "main.h"

/**
 * _atoi - a function to convert a character
 * to a number
 * @s: the string parameter
 * Return: On success, return the results,
 * On error, return 0;
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;
	char flag= 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			flag = 1;
			result = result * 10 + *s - '0';
		}

		else if (flag)
			break;
		s++;
	}

	if (sign < s)
		result = result * -1;

	return (result);
}
