#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: string hold name
 * @f: function to pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	int i;

	i = 0;
	while (name[i] != '\0')
	{
		_putchar(name[i] + '0');
		i++;
	}
	f(char *);
}
