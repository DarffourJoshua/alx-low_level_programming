#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: returns pointer to c position
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *first = accept;

	while (*s)
	{
		flag = 0;

		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = first;
		if (flag == 0)
			break;
	}
	return (count);
}
