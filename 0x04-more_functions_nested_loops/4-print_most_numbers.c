#include "main.h"
/**
 * print_most_numbers - print form 0 to 9 without 2,4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char c[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		if (c[i] != c[2] && c[i] != c[4])
			_putchar(c[i]);
	}
	_putchar('\n');
}
