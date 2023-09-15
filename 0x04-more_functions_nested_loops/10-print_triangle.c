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
	int h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		h = size + 1;
		for (i = 0; i < size; i++)
		{
			h--;
			for (j = 0; j < h; j++)
				_putchar(' ');
			_putchar('#');
			_putchar('\n');
		}
	}
}
