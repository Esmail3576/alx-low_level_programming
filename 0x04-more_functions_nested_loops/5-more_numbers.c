#include "main.h"
/**
 * print_numbers - print from 0 - 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;
	int j;
	int h;

	for (j = 0; j <=10; j++)
	{
		for (h = 0; h <= 14; h++)
		{
			i = h;
			if (h > 9)
			{
				_putchart(1 + 48);
				i = i % h;
			}
			_putchar(i + 48);
		}
		_putchar('\n');
	}
}
