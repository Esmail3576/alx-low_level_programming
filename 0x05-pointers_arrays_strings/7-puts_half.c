#include "main.h"
/**
 * puts_half - print a second half of string
 *
 * @str: apointer to string
 *
 * Return: void
 *
 */
void puts_half(char *str)
{
	int i = 0;
	char *c;

	while (*str != '\0')
	{
		*(c + i) = *str;
		i++;
		str++;
	}
	while (i > 0)
	{
		if (i % 2 == 0)
		{
			_putchar(*c);
		}
		c++;
	}
	_putchar('\n');
}
