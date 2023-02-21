#include "main.h"

/**
 * print_alphabet_x10 - check lower alphabet
 * Description: function uses _putchar function
 * to print lower alphabet 10 times
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar (j);
		_putchar ('\n');
	}
}
