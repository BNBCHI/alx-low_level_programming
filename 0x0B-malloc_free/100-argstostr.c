#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of program
 *@ac: number or arguments
 *@av: arguments
 * Return: Pointer to new string or NULL if fails
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (ac == 0)
	{
		return (NULL);
	}
	if (av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[r] = av[i][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}

