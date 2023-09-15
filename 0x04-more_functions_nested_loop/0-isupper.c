#include "main.h"
/**
 * _isupper - check uppercase letter
 *
 * @c: integer value for a char
 *
 * Return: 1 or 0
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 91)
		return (1);
	else
		return (0);
}
