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

	while (src[len] != '\0' && len < n)
	{
		dest[len] = src[len];
		len++;
	}
	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}
	return (dest);
}
