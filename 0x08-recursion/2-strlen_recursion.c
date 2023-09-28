#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: a stirng.
 * Return: an integer the length of string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		int n = 0;
		return n;
	}
	s++;
	_strlen_recursion(s);
	return n++;
}
