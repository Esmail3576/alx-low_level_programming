#include "main.h"
/**
 * _strlen - returns length of string
 *
 * @s: pointer to char
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 1;

	while (*s != '\0')
		i++;
	return (i);
}
