#include "main.h"
/**
 * print_line - print a line n number of times
 * or a 0 for another case
 * @n: the character in ASCII code
 * Return: The printed line _ n number of times
 */
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			continue;
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
