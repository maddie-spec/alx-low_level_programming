#include "main.h"

/**
 * print_rev - reverse
 * @s: a pointer
 * Return: 0
 */
void print_rev(char *s)
{
	int i, j, len;

	for (i = 0; s[i] != '\0'; i++)
	{
		i++;
	}
	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
