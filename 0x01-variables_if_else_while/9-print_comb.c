#include <stdio.h>

/**
 * main - print single digits
 * Return: Always 0
 */
int main(void)
{
	int b;

	for (b = 48; b <= 57; b++)
	{
		putchar(b);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
