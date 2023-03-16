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

	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
