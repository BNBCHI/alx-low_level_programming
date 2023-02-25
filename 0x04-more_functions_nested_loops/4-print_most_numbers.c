#include "main.h"
/**
 * print_most_numbers - Prints all the numbers except 2 and 4
 *
 * Return: numbers 0-9 except 2 and 4
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 2 || a == 4)
		{
			continue;
		}
		_putchar(a + 48);
	}
	_putchar('\n');
}
