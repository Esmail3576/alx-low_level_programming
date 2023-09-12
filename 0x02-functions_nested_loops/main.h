#include <stdio.h>
#include "_putchar.c"
void print_alphabet(void);

/**
 * print_alphabet - print small letters
 *
 * Retrutn: 0.
 *
 */
void print_alphabet(void)
{
	char ch[] = "abcdefghijklmnopqrstuvxwz";
	int i;

	for (i = 0; i < 27; i++)
		_putchar(ch[i]);
	_putchar('\n');
}
