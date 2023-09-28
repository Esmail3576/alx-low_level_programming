#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: a number
 * Return: intger the factorial of given number
 */
int factorial(int n)
{
	int factorial;

	if (n < 0)
		return (-1);
	else if (n = 0)
		return (1);
	else
	{
		factorial = n * factorial(n - 1);
		return (n);
	}
}
