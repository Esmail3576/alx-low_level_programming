#include "main.h"
/**
 * print_times_table - prints the times table
 * @n: time table for n
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int i, j, r;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = i * j;
				if (r <= 9 && j != 0)
					_putchar(' ');
				print(r);
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
					if ((i * (j + 1)) <= 99)
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
/**
 * print - print the result of mutlipication
 * @r: the number that will print
 * Return: void
 */
void print(int r)
{
	if (r > 9)
	{
		if (r > 99)
		{
			_putchar('0' + (r / 100));
			_putchar('0' + ((r / 10) % 10));
		}
		else
		{
			_putchar('0' + (r / 10));
		}
	}
	_putchar('0' + (r % 10));
}
