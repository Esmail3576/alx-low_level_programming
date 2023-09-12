#include "main.h"
/**
 * _islower - check if the letter is small or not
 *
 * @c: represent the int value of char
 *
 * Return: Always 0.
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (49);
	else
		return (48);
}
