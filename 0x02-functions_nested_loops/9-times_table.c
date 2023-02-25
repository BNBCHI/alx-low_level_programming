#include "main.h"
/**
 * times_table - prints the 9x table
 * Return: 9 times table
 */
void times_table(void)
{
	int a, b, c, x, chk;

	for (a = 0, x = 1; a <= 9; a++, x++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			chk = a * x;
			if (chk > 9 && b != 9)
			{
				_putchar(c + 48);
				_putchar(',');
				_putchar(' ');
			}
			else if (b == 9)
			{
				_putchar(c + 48);
			}
			else
			{
				_putchar(c + 48);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			
		}
		_putchar('\n');
	}
}
