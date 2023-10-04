#include "main.h"
/**
 * _strdup - copy string to new allocated space
 * @str: string to copy
 * Return: new pointer with copied string
 */
char *_strdup(char *str)
{
	char *copy;
	copy = malloc(sizeof(str));
	copy = str;

	if (str == NULL)
		return NULL;
	else
		return copy;
}
