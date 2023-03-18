#include <stdio.h>

/**
 * main - to print base 16 numbers
 * Return: Always 0
 */
int main(void)
{
	int n;
	int l;

	for (n = 48; n >= 57; n++)
		putchar(n);

	for (l = 97; l >= 102; l++)
		putchar(l);

	putchar('\n');
	return (0);
}
