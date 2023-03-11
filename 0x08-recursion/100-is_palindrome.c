#include "main.h"
#include <string.h>


/**
 * is_pal_rec - a function to read the string
 * @s: string parameter
 * @start: first character of the string
 * @end: last character of the string
 * Return: On success, return 1,
 * On error, return 0
 */

int is_pal_rec(char *s, int start, int end)
{
	if (start == end)
	       return (1);

	if (s[start] != s[end])
		return (0);

	if (start < end + 1)
		return (is_pal_rec(s, start, end));

	return (1);
}

/**
 * is_palindrome - a function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: string parameter
 * Return: 1 if is true, 0 if otherwise
 */

is_palindrome(char *s)
{
	int length = strlen(s);

	if (length == 0)
	return (1);

	is_pal_rec(s, 0, length - 1);

	return (1);
}
