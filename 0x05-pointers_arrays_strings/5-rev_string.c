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
	char *c;

	while (*s != '\0')
	{
		/*t[i] = *s;*/
		i++;
		s++;
	}
	while (i > 0)
	{
		i--;
		s--;
		*c = *s;
		c++;
	}
	/**while (*s != '\0')
	{
		c--;
		*s = *c;
		s++;
	}*/
}
