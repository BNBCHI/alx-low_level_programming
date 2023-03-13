#include "main.h"

/**
 * _puts_recursion - check the code
 *@s: input string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
