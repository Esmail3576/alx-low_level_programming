#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	conc = malloc((i + j + 1) * sizeof(char));
	if (conc == NULL)
		return (NULL);

	for (i = 0; *s1 != '\0'; i++)
	{
		conc[i] = *s1;
		s1++;
	}
	while (*s2 != '\0')
	{
		conc[i] = *s2;
		i++;
		s2++;
	}
	return (conc);
}
