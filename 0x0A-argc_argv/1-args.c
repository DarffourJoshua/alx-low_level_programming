#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints the
 * number of arguments passed into it
 * @argc: arguement count
 * @argv: arguements vector
 * Return: 0 if success, 1 if otherwise
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
