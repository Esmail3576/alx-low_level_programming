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

	_abs(c);
	last_digit = c % 10;
	return (last_digit);

}
