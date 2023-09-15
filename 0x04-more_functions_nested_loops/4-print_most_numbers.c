#include "main.h"
/**
 * print_numbers - print from 0 - 9
 *
 * Return: void
 */
void print_numbers(void)
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
