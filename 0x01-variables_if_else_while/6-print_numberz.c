#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (SUCCESS)
 *
 */
int main(void)
{
	char alph[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
		putchar(alph[i]);
	putchar('\n');
	return (0);
}
