#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (SUCCESS)
 *
 */
int main(void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		putchar(alph[i]);
	putchar('\n');
	return (0);
}
