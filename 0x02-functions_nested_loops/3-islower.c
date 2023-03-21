#include "main.h"

/**
 * _islower - to check for lower case
 * @c: a variable
 * Return: if lowercase return 1 if not return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
