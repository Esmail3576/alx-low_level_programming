#include "main.h"
/**
 * _strncpy - copies a string.
 *
 * @dest: first string
 * @src: second string
 * @n: number
 *
 * Return: a copy of string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;
	int reset = 0;

	while (len < n)
	{
		if (src[len] == '\0')
			reset = 0;
		dest[len] = src[reset];
		len++;
		reset++;
	}
	return (dest);
}
