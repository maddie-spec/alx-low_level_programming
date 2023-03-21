#include "main.h"

/**
 *  _isalpha - to check for alphabets
 *  Return: to return 0 or 1
 *  @c: the variable
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
