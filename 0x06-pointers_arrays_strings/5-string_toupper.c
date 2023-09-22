#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @dest: string with lowercase
 *
 * Return: uppercase string
 */
char *string_toupper(char *dest)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		for (j = 0; j < 26; j++)
		{
			if (dest[i] == lower[j])
				dest[i] = upper[j];
		}
	}
	return (dest);
}
