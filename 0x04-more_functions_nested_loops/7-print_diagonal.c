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

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');

		}
	}
}
