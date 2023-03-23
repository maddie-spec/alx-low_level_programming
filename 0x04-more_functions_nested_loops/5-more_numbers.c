#include "main.h"

/**
 * more_numbers - print 1 to 14
 * Return: 0
 */
void more_numbers(void)
{
	int n;
	int a;

	for (n = 0; n < 10; n++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}

}
