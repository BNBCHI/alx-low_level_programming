#include "main.h"
/**
 * print_sign - prints + if input is greater than 0
 * prints 0 if is 0 and - if input is less than 0
 * @n - input number
 * Return: 1 if greater than 0, 0 if is 0, and -1 if less than 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		retun (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
