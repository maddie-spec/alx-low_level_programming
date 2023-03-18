#include <stdio.h>

/**
 * main - to print lowercase in reverse
 * Return: Always 0
 */
int main(void)
{
	int lr;

	for (lr = 'z'; lr >= 'a'; lr--)
	{
		putchar(lr);
	}
	putchar('\n');
	return (0);
}
