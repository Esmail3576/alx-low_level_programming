#include "main.h"
/**
 * print_most_numbers - print from 0 - 9 without 2,4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char n[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		if (n[i] != n[2] && n[i] != n[4])
			_putchar(n[i]);
	}
	_putchar('\n');
}
