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
	int mul;

	if (argc < 3)
	{
		printf("Error");
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return 0;
}