#include "main.h"
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string.
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	char *c = s;

	if (*s == '\0')
	{
		return (0);
	}
	is_palindrome(s + 1);
	*c = *s;
	if (*c == *s)
	{
		c++;
		return (1);
	}

	else
		return (0);
}
