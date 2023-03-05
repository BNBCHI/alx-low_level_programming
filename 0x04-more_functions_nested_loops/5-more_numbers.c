#include "main.h"
/**
 * more_numbers - prints numbers from 0-14 10 times
 * Return: list of numbers 0-14 10 times
 */
void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
				_putchar('1');
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
