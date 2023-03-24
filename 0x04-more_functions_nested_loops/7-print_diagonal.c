#include "main.h"

/**
 * print_diagonal - to print diagonals
 * Return: 0
 * @n: a variable
 */
void print_diagonal(int n)
{
	int i;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (b = i; b <= i; b--)
			{
				_putchar(' ');
			}
		{
			_putchar(92);
			_putchar('\n');
		}
		}
	}
}
