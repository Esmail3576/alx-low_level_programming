#inlcude "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	conc = malloc(sizeof(s1) + sizeof(s2));

	for (i = 0; *s1 != '\0'; i++)
	{
		conc[i] = *s1;
		s1++;/
	}
	while (*s2 != '\0')
	{
		conc[i] = *s2;
		i++;
		s2++;
	}
	return conc;
}
