#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: a stirng.
 * Return: an integer the length of string.
 */
int _strlen_recursion(char *s)
{
	int n;

	if (*s == '\0')
	{
		n = 0;
		return n;
	}
	s++;
	_strlen_recursion(s);
	n++;
	return n;
}
