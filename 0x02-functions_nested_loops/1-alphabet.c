#include "main.h"
/**
 * main - Entry point
 *
 * Retrun: Always 0
 *
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - print alphabet small letter
 *
 * Return: Always 0
 *
 */
void print_alphabet(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 27; i++)
		putchar(ch[i]);
	putchar('\n');
}
