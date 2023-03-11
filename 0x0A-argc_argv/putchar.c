#include <unistd.h>

/**
 * _putchar - print the arguements
 * @c: string parameter
 * Return: 1 if success, 0 if otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));	
}
