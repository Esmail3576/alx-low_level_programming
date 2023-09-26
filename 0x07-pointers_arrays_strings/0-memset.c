#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: pointer
 * @c: character
 * @n: number of bytes
 * Return: pointer to memory area s.
 */
char *_memset(char *s, char c, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = c;
		n--;
	}
	return (s);
}
