#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 *@str: Pointed string.
 * Return: String.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
