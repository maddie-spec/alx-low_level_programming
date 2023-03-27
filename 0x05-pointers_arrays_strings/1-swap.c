#include "main.h"

/**
 * swap_int - to swap
 * Return: 0
 * @a: a pointer
 * @b: a pointer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;

}
