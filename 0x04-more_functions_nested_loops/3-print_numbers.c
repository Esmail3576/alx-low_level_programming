#include "main.h"
/**
 * print_numbers - print from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	char c[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
		_putchar(c[i]);
	_putchar('\n');
}
