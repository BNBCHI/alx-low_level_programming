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
	if (argc < 0)
	{
		return (1);
	}
	printf("%s\n", argv[0]);
	return (0);
}
