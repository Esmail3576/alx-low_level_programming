#include "main.h"
/**
 * leet - encodes a string into 1337.
 *
 * @dest: a string
 *
 * Return: encoded string
 */
char *leet(char *dest)
{
	int i;
	int j;
	int k;
	char letter[] = "oOlLeEaAtT";
	char encode[] = "0011334477";

	i = 0;
	while (dest[i] != '\0')
	{
		j = 0;
		k = 0;
		while (letter[j] != '\0')
		{
			if (dest[i] == letter[j])
			{
				k = j;
				dest[i] = encode[k];
			}
			j++
		}
		i++
	}
	return (dest);

}
