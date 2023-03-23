#include "main.h"

/**
 * _isdigit - to check for digits
 * @c: a variable
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
