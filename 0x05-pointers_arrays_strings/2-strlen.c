#include "main.h"

/**
 * _strlen - to find length of a string
 * Return: 0
 * @s: a pointer
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

}
