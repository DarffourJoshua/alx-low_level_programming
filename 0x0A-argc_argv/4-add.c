#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - a function that adds positive numbers
 * @argc: argument count
 * @argv: arguement vector
 * Return: 1 if success, 0 if otherwise
 */

int main(int argc, char **argv)
{
	int i, num, sum = 0;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!isdigit(argv[argc][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
