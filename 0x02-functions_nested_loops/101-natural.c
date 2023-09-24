#include <stdio.h>
/**
 * main - computes multiply of 3 & 5
 *
 * Return: sucess
 */
int main(void)
{
	int i;
	int r = 0;

	for (i  = 0; i <= 1024; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			r = r + i;
		else if (i % 5 == 0)
			r = r + i;
		else if (i % 3 == 0)
			r = r + i;
	}
	printf("%d\n", r);
	return (0);
}
