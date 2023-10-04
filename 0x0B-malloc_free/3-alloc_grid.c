#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width
 * @height: height
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int **2d;
	int i, j;

	2d = malloc*(sizeof(width) * sizof(height));
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			2d[i][j] = 0;
	}
	return 2d;

}
