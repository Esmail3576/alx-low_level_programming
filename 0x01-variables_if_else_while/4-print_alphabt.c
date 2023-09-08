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
	char del;

	for (i = 0; i < 26; i++)
	{
		del = alph[i];
		if (del != alph[4] && del != alph[16])
			putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
