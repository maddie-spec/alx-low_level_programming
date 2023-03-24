#include "main.h"

/**
 * print_square - to  print square
 * Return: 0
 * @size: a variable
 */
void print_square(int size)
{
	int a;
	int b;

	a = size;
	b = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 1; b <= size; b++)
		{
			for (a = 1; a <= size; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
