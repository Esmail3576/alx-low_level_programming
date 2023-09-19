#include "main.h"
/**
 * puts2 - print other char in a string
 *
 * @str: apointer to string
 *
 * Return: void
 *
 */
void puts2(char *str);
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		i++;
	}
	_putchar('\n');
}
