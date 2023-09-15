#include "main.h"
/**
 * print_most_numbers - print from 0 - 9 without 2,4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char numbers[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		if (numbers[i] != 2 || numbers[i] != 4)
			_putchar(numbers[i]);
	}
	_putchar('\n');
}
