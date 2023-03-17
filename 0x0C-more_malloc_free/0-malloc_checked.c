#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -  a function that allocates memory using malloc.
 * @b: integer value
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		 exit(98);

	return (ptr);
}