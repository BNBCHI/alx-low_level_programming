#include "main.h"
/**
 * _islower - Shows 1 if input is lower case
 * or a 0 for another case
 * @c: the character in ASCII code
 * Return: 1 for lowercase character, 0 for others.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
