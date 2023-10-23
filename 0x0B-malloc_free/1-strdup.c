#include "main.h"
/**
 * _strdup - copy string to new allocated space
 * @str: string to copy
 * Return: new pointer with copied string
 */
char *_strdup(char *str)
{
	char *copy;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	i++;
	copy = malloc(i * sizeof(char));
	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];
	copy[i] = '\0';

	return (copy);
}
