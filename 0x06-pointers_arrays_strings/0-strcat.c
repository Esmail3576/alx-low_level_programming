#include "main.h"
/**
 * *_strcat - concatenates two strings
 *
 * @dest: first string
 * @src: second string
 *
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int length = 0;
	int j = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	while (src[j] != '\0')
	{
		dest[length + j] = src[j];
		j++;
	}
	dest[length + j] = '\0';
	return (dest);
}
