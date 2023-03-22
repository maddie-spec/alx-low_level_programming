#include <stdio.h>

/**
 * main - to print fiobacci numbers
 * Return: Always 0
 */
int main(void)
{
	int count;
	int first = 1, second = 2;
	int next = first + second;

	for (count = 3; count <= 50; count++)
	{
		if (count == 50)
		{
			printf("%d\n", next);
		}
		else
		{
			printf("%d, ", next);
		}
		first = second;
		second = next;

		next = first + second;
	}
	return (0);
}

