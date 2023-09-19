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
	char t[];
	int i = 0;

	while (*s != '\0')
	{
		t[i] = *s;
		i++;
		s++;
	}
	while (*s != '\0')
	{
		_putchar(t[i]);
	}
	_putchar('\n');
}
