#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @s: a pointer of char to string
 *
 * Return: void
 *
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char *c;

	while (*s != '\0')
	{
		/*t[i] = *s;*/
		i++;
		s++;
	}
	c = s;
	for (j = 0; i > 0; j++)
	{
		c[j] = s[i];
		i--;
	}
	/**while (*s != '\0')
	{
		c--;
		*s = *c;
		s++;
	}*/
}
