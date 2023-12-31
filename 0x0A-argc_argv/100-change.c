#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0 or 1.
 */
int main(int argc, char *argv[])
{
	int cent = 0;
	int coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	while (cent > 0)
	{
		coin++;
		if ((cent - 25) >= 0)
			cent = cent - 25;
		else if ((cent - 10) >= 0)
			cent = cent - 10;
		else if ((cent - 5) >= 0)
			cent = cent - 5;
		else if ((cent - 2) >= 0)
			cent = cent - 2;
		else
			cent--;
	}
	printf("%d\n", coin);
	return (0);
}
