#include "main.h"
/**
 * malloc_checked -  allocates memory using malloc
 * @b: size of malloc
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
		return (98);
	return (c);
}
