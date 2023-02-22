#include <stdio.h>

/**
 * print_to_98 - check the description
 * @num: An integer value
 * Description: A function that prints all natural numbers from n to 98,
 * followed by a new line
 * return: nothing
 */

void print_to_98(int num)
{
	if (num <= 98)
	{
		for (; num <= 98; num++)
		{
			if (num == 98)
			{
				printf("%d", num);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", num);
			}
		}
	}
	else
	{
		for (; num >= 98; num--)
		{
			if (num == 98)
			{
				printf("%d", num);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", num);
			}
		}
	}
}
