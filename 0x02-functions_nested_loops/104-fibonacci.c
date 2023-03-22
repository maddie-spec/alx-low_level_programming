#include <stdio.h>

/**
 * main - to prit first 98 fibioncci number
 * Return: Always 0
 */
int main(void)
{
	int count;
	long int first = 1, second = 2;
	long int next = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);

	for (count = 3; count <= 98; count++)
	{
		if (count == 98)
		{
			printf("%lu\n", next);
		}
		else
		{
			printf("%lu, ", next);
		}
		first = second;
		second = next;

		next = first + second;
	}
	return (0);
}
