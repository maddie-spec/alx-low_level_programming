#include <stdio.h>

/**
 * main - to prit first 98 fibioncci number
 * Return: Always 0
 */
int main(void)
{
	int count;
	long long int first = 1, second = 2;
	long long int next = first + second;

	printf("%llu, ", first);
	printf("%llu, ", second);

	for (count = 3; count <= 98; count++)
	{
		if (count == 98)
		{
			printf("%llu\n", next);
		}
		else
		{
			printf("%llu, ", next);
		}
		first = second;
		second = next;

		next = first + second;
	}
	return (0);
}
