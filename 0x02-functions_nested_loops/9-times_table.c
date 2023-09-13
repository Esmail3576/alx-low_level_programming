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
			_putchar('0' + r);
			_putchar(',');
			_puthchar(' ');
		}
		_putchar('\n');
	}
}
