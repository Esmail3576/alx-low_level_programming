#include "main.h"
/**
 * _puts - print a string
 *
 * @str: apointer to string
 *
 * Return: void
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str + '0');
	_putchar('\n');
}