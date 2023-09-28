#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: a number
 * Return: square of the number
 */
int _sqrt_recursion(int n)
{
	int sqrt;

	if ((n % 1) == 0)
		return (1);
	sqrt = _sqrt_recursion((n - 1));
	if (sqrt == n)
		return (-1);
	sqrt = sqrt * sqrt;
	if (sqrt == n)
		return (sqrt);
	else
		return ((sqrt + 1));
}
