#include "main.h"

/**
 * print_last_digit - prints last digit
 * @d: a variable
 * Return: Always 0
 */
int print_last_digit(int d)
{
	int ld = d % 10;

	if (ld < 0)
	{
		_putchar('-');
		ld = -ld;
	}
	
	_putchar(ld);

}
