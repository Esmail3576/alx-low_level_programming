
#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @n: number
 * @a: number pointer
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *reverse = a;
	int i = 0;
	while (i < n)
	{
		reverse[n-1] = a[i];
	}
}
