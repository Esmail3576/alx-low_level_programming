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
	int t;

	for (i = 0; i < 3; i++)
	{
		for (t = 0; t < 10; t++)
		{
			for (j = 0; j < 7; j++)
			{
				for (h = 0; h < 10; h++)
				{
					_putchar('0' + i);
					_putchar('0' + t);
					_putchar(':');
					_putchar('0' + j);
					_putchar('0' + h);
					_putchar('\n');
					if (j == 5 && h == 9)
						h = 11;
				}
			}
		}
		if (i == 2 && t == 3)
			i = 4;
	}
}
