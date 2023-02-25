#include "main.h"
/**
 * _isdigit - Shows 1 if input is a numeric character
 * or a 0 for another case
 * @c: the character in ASCII code
 * Return: 1 for numeric character, 0 for others.
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	 _putchar('\n');
}
