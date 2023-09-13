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
		last_digit = c % 10;
		abs = last_digit * -1;
		_putchar('0' + abs);
		return (abs);
	}
	else
	{
		last_digit = c % 10;
		_putchar('0' + last_digit);
		return (last_digit);
	}

}
