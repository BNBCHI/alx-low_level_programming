#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds up all the arguments taken
 *@n: number of arguments
 * Return: Sum else 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i, sum;

	sum = 0;

	if(n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for(i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
