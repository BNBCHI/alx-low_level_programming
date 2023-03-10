#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check the code
 *@a: input
 *@size: input
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int x, y, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

		for (x = 0; x < size; x++)
		{
			sum1 = sum1 + a[y * size + y];
		}
		for (y = size - 1; y <= 0; y--)
		{
			sum2 = sum2 + a[y + size + (size - y - 1)];
		}
		printf("%d, %d",sum1, sum2);
}
