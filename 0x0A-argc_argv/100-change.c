#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0 or 
 */
int main(int argc, **argv)
{
	int cent = 0;
	int coin = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);	
	}
	cent = atoi(cent);
	while (cent > 0)
	{
		coin++;
		if ((cent - 25) >= 0)
			cent = cent - 25;
		if ((cent - 10) >= 0)
			cent = cent - 10;
		if ((cent - 5) >= 0)
			cent = cent - 5;
		if ((cent - 2) >= 0)
			cent = cent - 2;
		cent--;
	}
	printf("%d\n", coin);
	return (0);
}
