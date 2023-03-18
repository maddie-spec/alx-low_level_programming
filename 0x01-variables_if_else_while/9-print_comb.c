#include <stdio.h>

/**
 * main - print single digits
 * Return: Always 0
 */
int main(void)
{
	int b;

	for (b = 48; b < 58; b++)
	{
		putchar(b);
		if (b == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
