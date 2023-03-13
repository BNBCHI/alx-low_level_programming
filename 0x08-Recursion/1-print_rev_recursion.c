#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 *@s: input string
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	int count = 0;

	for (s = 0; *s != '\0'; s++)
	{
		count++ ;
	}
	while (count > 0)
	{
		_putchar(*s);
		s--;
	}
}
