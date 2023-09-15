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

	for (i = 0; i <=10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar('0' + (j / 10));
			_putchar('0' + (J % 10));
		}
		_putchar('\n');
	}
i}
