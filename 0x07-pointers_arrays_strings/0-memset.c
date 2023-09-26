#include "main.h"
/**
 * _memset - 
 * @s
 * @c
 * @n
 * Return:
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
