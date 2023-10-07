#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers.
 * @argc: number of arguments
 * @argv: pointer array
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *ptr;

	while (--argc)
	{
		for (ptr = argv[argc]; *ptr; ptr++)
			if (*ptr < '0' || *ptr > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}

	printf("%d\n", sum);

	return (0);
}
