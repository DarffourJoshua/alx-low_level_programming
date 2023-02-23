#include <stdio.h>

/**
 * total_sum - check the description
 * Description: a program that computes and prints the sum of all the 
 * multiples of 3 or 5 below 1024 (excluded), followed by a new line.
 * return: nothing
 */

void total_sum()
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d", sum);
	printf("\n");
}

/**
 * main - check the description
 * return: Always 0
 */

int main(void)
{
	total_sum();
	return (0);
}
