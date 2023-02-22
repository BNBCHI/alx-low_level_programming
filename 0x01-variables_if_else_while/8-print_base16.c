#include <stdio.h>
/**
 * main - Print Hexadecimal values
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char hex;

	for (num  = '0'; num <= '9'; num++)
	{
		putchar(num + 0);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
