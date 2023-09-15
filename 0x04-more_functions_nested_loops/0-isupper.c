#include "main.h"
/**
 * _isupper - check upper case letter
 *
 * @c: integer value of char
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
		return (1);
	else
		return (0);
}
