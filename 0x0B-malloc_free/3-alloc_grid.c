#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width
 * @height: height
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	array = malloc(sizeof(width) * sizeof(height));
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			array[i][j] = 0;
	}
	return array;

}
