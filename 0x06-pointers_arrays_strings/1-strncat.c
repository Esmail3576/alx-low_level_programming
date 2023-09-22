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
	char *str = NULL;

	while (dest[length] != '\0')
	{
		str[length] = dest[length];
		length++;
	}
	while (j < n)
	{
		dest[length + j] = src[j];
		j++;
	}
	length = length + j;
	dest[length + j] = src[j];
	for (j = 0; src[j] != '\0'; j++)
	{
		str[length] = src[j];
		length++;
	}
	str[length + 1] = '\0';
	return (str);
}
