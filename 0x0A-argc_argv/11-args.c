#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints program name
 * @argc: input
 * @argv: array pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n = 0;

	if (argc < 0)
	{
		return (1);
	}
	while (n < argc)
	{
		printf("%s\n", argv[n]);
		n++;
	}
	return (0);
}
