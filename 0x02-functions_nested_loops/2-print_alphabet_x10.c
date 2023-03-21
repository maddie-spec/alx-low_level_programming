#include "main.h"

/**
 * print_alphabet_x10 - to print alphabets x10
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char lc;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
			_putchar(lc);
		_putchar('\n');
	}

}
