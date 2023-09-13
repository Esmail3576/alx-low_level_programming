#include "main.h"
/**
 * print_to_98 - prints to 98
 *
 * @n: start number
 *
 * Return: no return
 *
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n);
		printf(", ");
		n++;
	}
	while (n > 98)
	{
		printf("%d", n);
		printf(", ");
		n--;
	}
	if (n == 98)
		printf("%d", n);
}
