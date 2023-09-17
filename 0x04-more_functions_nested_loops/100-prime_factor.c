#include <stdio.h>
/**
 * main - print largest prime factory
 *
 * Return: 0
 */
int main(void)
{
	int i = 1;
	unsigned long prime = 612852475143;
	int m = 3;

	while (i > 0)
	{
		if (prime % 2 == 0)
		{
			prime = prime / 2;
		}
		else if (prime % m == 0)
		{
			prime = prime / m;
		}
		else if (prime == 1)
		{
			i = 0;
		}
		else
		{
			m = m + 2;
		}
	}
	printf("%d\n", m);
	return (0);
}
