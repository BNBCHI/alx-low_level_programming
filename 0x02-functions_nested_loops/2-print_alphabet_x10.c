#include "main.h"
/**
 * print alphabet x10 - prints the alphabet 10 times in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a, b;
	
	for (a = 0; a <= 9; a++)
	{
		for (b = 'a'; b<= 'z'; b++)
		{
			_putchar(b);
		}
	}
	_putchar('\n');
}
