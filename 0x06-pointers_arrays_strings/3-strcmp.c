
#include "main.h"
/**
 * _strcmp - compare two string
 *
 * @dest: first string
 * @src: second string
 *
 * Return: number
 */
int _strcmp(char *s1, char *s2)
{
	int result = 0;
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (s1[i] != s2[i])
		result = s1[i] - s2[i];
	return (result);
}
