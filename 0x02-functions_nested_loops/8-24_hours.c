#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0.
 *
 */
void jack_bauer(void)
{
	int i;
	int j;
	int h;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 7; j++)
		{
			for (h = 0; h < 10; h++)
			{
				_putchar('0' + i);
				_putchar('0' + i);
				_putchar(':');
				_putchar('0' + j);
				_putchar('0' + h);
				_putchar('\n');
				if (j == 6)
					h = 11;
			}
		}
	}
}
