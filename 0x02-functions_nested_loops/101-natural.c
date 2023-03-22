#include <stdio.h>

/**
 * main - to print
 * Return: Always 0
 */
int main(void)
{
	int n;
	int z;

	for (n = 3; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			z += n;
		}

	}
	printf("%d\n", z);
	return (0);
}
