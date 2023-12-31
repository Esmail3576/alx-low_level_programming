#include "main.h"
/**
 * create_array - creates an array
 * of chars, and initializes it with
 * a specific char
 * @size: size of new malloc
 * @c: char signed to pointer
 * Return: a pointer with char value
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	else if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= size; i++)
			array[i] = c;
		return (array);
	}
}
