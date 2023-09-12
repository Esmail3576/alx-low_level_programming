#include "main.h"
/**
 * print_alphabet_x10 - print small letters 10x times
 *
 * Retrun: Always 0.
 *
 */
void print_alphabet_x10(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j = 1;

	while (j <= 10)
	{
		for (i = 0; i < 26; i++)
			_putchar(ch[i]);
		_putchar('\n');
		j++;
	}
}
