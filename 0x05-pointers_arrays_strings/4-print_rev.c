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
	char *t;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
