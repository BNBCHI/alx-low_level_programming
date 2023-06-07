#include "main.h"
/**
 * _pow_recursion - returns the result of the power of the base input
 * @x: input base
 * @y: input exponent
 * Return: Result of base input to the power of exponent
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
