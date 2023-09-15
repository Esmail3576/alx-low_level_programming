#include "main.h"
/**
 * print_line - draw a straight line in terminal
 *
 * @n: length of line
 *
 * Rerurn: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
			_puthcar('_');
		_putchar('\n');
	}
}
