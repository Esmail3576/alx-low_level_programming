#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of 0 and 1 chars
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal, index, loop_index, num, length = get_length(b);

	if (b == NULL)
		return (0);
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] == '0' || b[index] == '1')
		{
			if (index == 0)
			{
				if (b[length] == '0')
					decimal = 0;
				else
					decimal = 1;
			}
			else if (b[(length - index)] == '1')
			{
				loop_index = index;
				num = 1;
				while (loop_index > 0)
				{
					num = num * 2;
					loop_index--;
				}
				decimal = decimal + num;
			}
		}
		else
			return (0);
	}
	return (decimal);
}
/**
 * get_length - get the length of a poiner.
 * @str: a pointer of chars.
 * Return: the length of the pointer
 */
unsigned int get_length(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	len = len - 1;
	return (len);
}
