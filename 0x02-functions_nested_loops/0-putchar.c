#include <stdio.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints the word Holberton, followed by a new line.
 * Return: 0.
 */

int main(void)
{
	char myStr[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int num;

	for (num = 0; num <= 8; num++)
	{
		putchar (myStr[num]);
	}

	return (0);
}
