#include "main.h"
/**
 * times_table = prints the 9 times table
 *
 * Return: Always 0.
 *
 */
void times_table(void)
{
	int i;
	int j;
	int r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			_putchar('0' + (r / 10));
			_putchar('0' + (r % 10));
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
