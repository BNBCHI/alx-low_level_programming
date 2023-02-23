#include "main.h"
/**
 * _isalpha - Shows 1 if input is an alphabetic character
 * or a 0 for another case
 * @c: the character in ASCII code
 * Return: 1 for alphabetic character, 0 for others.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	 _putchar('\n');
}
