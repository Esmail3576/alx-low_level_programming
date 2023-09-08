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

	for (i = 0; i < 9; i++)
	{
		j = i + 1;
		for (; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
