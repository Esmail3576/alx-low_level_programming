#include <stdio.h>
/**
 * main - print arg name
 * @argc: arguments count
 * @argv: arguments vector
 * Description: print 0 arg
 * Return: 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
