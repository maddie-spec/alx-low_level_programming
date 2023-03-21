#include "main.h"

/**
 * _abs - to print absolute value of an integer
 * Return: Always 0
 * @t: the variable
 */
int _abs(int t)
{

	if (t >= 0)
		_putchar(t);
	else
		_putchar(-t);

	return (0);
}
