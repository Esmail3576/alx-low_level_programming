#include "main.h"
/**
 * print_triangle - draw a triangle line in terminal
 *
 * @size: size of a triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar(' ');
			_putchar('#');
			_putchar('\n');
		}
	}
}
