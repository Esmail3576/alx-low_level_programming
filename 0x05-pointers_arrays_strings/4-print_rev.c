#include "main.h"
/**
 * print_rev - print a reverse string
 *
 * @s: apointer to string
 *
 * Return: void
 *
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		/*t[i] = *s;*/
		i++;
		s++;
	}
	while (i > 0)
	{
		i--;
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
