#include "main.h"
/**
 * print_diagonal - print a \ n number of times
 * or a 0 for another case
 * @n: the character in ASCII code
 * Return: The printed line \ n number of times
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 1; a <= n; a++)
	{
		b = a - 1;

		if (n <= 0)
		{
			_putchar('\n');
			continue;
		}
		else
		{
			_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
