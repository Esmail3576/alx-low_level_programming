#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array with data
 * @size: size of the array
 * @cmp: function pointer
 * Return: count of integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) == 1)
			return (index);
	}
	return (-1);
}
