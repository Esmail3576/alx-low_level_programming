#include "main.h"
/**
 * _abs - return absoulte value of a number
 *
 * @c: represent a number
 *
 * Return: Always 0.
 *
 */
int _abs(int c)
{
	int abs;

	if (c < 0)
	{
		abs = (-1 * abs);
		return (abs);
	}
	else
	{
		abs = (1 * abs);
		return (abs);
	}
}
