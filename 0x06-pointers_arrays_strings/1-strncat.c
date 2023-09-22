#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: first string
 * @src: second string
 * @n: bytes from src
 *
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int j = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	while (j < n)
	{
		dest[length + j] = src[j];
		j++;
	}
	dest[length + j] = '\0';
	return (dest);
}
