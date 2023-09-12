#include "main.h"
/**
 * print_alphabet - print small letters
 *
 * Retrun: Always 0.
 *
 */
void print_alphabet(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		_putchar(ch[i]);
	_putchar('\n');
}
