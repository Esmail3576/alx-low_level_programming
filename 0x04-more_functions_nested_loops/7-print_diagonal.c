#include "main.h"
/**
 * print_diagnoal - draw a diagnoal line in terminal
 *
 * @n: length of the line
 *
 * Return: void
 */
void print_diagnoal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');										}
		_puthcar('\n');
	}
}
