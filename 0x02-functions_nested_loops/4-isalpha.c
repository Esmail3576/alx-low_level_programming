#include "main.h"
/**
 * _isalpha - check if its letter or not
 *
 * @c: represent the int value of char
 *
 * Return: Always 0.
 *
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
