#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a function that multiplies two numbers
 * @argc: arguement count
 * @argv: arguement vector
 * Return: Al;ways 1
 */

int main(int argc, char **argv)
{
	int i, j, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = i * j;
		printf("%d\n", mul);
		return (0);
	}
}
