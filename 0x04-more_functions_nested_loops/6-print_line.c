#include "main.h"

/**
 * print_line - to print lines
 * Return: 0
 * @n: a variable
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	
}
