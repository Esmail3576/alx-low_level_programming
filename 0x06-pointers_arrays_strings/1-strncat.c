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
	char *str;

	while (dest[length] != '\0')
		length++;
	while (j < n)
		dest[length + j] = src[j];
	length = length + j;
	dest[length + j] = src[j];
	*str = dest;
	for (j = 0; src[j] != '\0'; j++)
	{
		str[length] = src[j];
		length++;
	}
	return (str);
}
