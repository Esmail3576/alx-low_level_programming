#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (SUCCESS)
 *
 */
int main(void)
{
	char small[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int j;

	for (i = 0; i < 26; i++)
		putchar(small[i]);
	for (j = 0; j < 26; j++)
		putchar(upper[j]);
	putchar('\n');
	return (0);
}
