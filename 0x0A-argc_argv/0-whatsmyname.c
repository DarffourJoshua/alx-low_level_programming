#include <stdio.h>
#include "main.h"

/**
 * main - a function that print the
 * name of the file
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0 if success, 1 if otherwise
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
