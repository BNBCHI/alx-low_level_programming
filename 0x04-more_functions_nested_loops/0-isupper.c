#include "main.h"
/**
 * _isupper - Returns 1 if c is uppercase and 0 if another case
 *
 * @c: assigned letter
 * Return: 1 if c is uppercase, and 0 if c is lower
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
