#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i, half, x;

	for (i = 0; str[i] != '\0'; i++)
	;
	
	half = i/2;
	
	for (x = half; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
