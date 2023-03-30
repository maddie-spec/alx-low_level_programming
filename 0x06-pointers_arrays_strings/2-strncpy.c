#include "main.h"

/**
 * _strncpy - a pointer
 * @dest: pointer
 * @src: pointer
 * @n: a int
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	for (n = 0; src[n] != '\0'; n++)
	{
		_putchar(src[n]);
	}
	dest[n] = src[n];
	dest[n] = '\0';

	return (0);
}
