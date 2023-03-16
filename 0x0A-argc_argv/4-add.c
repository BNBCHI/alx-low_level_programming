#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds positive numbers
 * @argc: input
 * @argv: array pointer
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *k;

	if (argc == 0)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		k = argv[i];

		for (j = 0; j < strlen(k); j++)
		{
			if (j[k] < 48 || j[k] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
		k++;
	}
	printf("%d\n", sum);
	return (0);
}
