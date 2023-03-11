#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints all arguments
 * @argc:; arguement count
 * @argv: arguement vector
 * Return: 0 if success, 1 if otherwise
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
