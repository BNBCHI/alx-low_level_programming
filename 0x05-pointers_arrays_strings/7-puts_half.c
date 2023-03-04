#include "main.h"

/**
 * puts_half - prints half of the string
 *@str: input string
 * Return: half of given string
 */
void puts_half(char *str)
{
	int i, half, x;

	for (i = 0; str[i] != '\0'; i++)
	;
	if (i % 2 == 1)
	{
		i = (i - 1);
	}
	half = i / 2;

	for (x = half; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
