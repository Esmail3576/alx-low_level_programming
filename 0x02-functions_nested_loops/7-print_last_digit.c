#include "main.h"
/**
 * print_last_digit - print the last digit
 *
 * @c: represent a number
 *
 * Return: Always 0.
 *
 */
int print_last_digit(int c)
{
	int last_digit;
	int abs;

	if (c < 0)
	{
		abs = -1 * c;
		last_digit = abs % 10;
		_putchar(last_digit);
		return (last_digit);
	}
	else
	{
		last_digit = c % 10;
		_putchar(last_digit);
		return (last_digit);
	}

}
