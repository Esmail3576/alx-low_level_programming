#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - prints the opcodes of its own main function.
 * @str: starting
 * @p: end address
 * Return: void
*/

void print_opcodes(unsigned char *str, unsigned char *p)
{
	while (str < p)
	{
		printf("%02x", *str);
		if (str + 1 < p)
			printf(" ");
		str++;
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function.
 * @argc: number of argument
 * @argv: argument
 * Return: 0
*/

int main(int argc, char **argv)
{
	int a;
	unsigned char *d, *h;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		return (2);
	}

	d = (unsigned char *)main;
	h = d + a;

	print_opcodes(d, h);

	return (0);
}
