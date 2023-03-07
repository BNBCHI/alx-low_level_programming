#include <stdio.h>
#include "main.h"
/**
 * main - prints numbers 1 - 100 where Fizz is a multiple
 * of 3 and Buzz a multibple of 5
 *
 * Return: Printed numbers
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (x % 5 == 0)
		{
			printf(" Buzz");
		}
		else if ((x % 5 == 0) && (x % 3 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (x == 1)
		{
			printf("%d", x);
		}
		else
		{
			printf(" %d", x);
		}
	}
	return (0);
}
