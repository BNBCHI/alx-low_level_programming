#include <stdio.h>
/**
 * main - Print Numbers 0-9 with a space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		if (num == 9)
			break;
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
