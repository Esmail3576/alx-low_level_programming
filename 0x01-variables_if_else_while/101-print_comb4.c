#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (SUCCESS)
 *
 */
int main(void)
{
	int i;
	int j;
	int h;

	for (i = 0; i < 8; i++)
	{
		j = i + 1;
		for (; j < 9; j++)
		{
			h = j + 1;
			for (; h < 10; h++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + h);
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
