#include "main.h"
/**
 * is_prime_number - print 1 ifprime 0 if not
 * @n: number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		n = is_prime_number(n / 2);
		return (n);
	}
	else
	{
		return (0);
	}
}
