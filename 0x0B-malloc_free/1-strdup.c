#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to allocated memory
 * containing a copy of the string
 *@str: input string
 * Return: Null is str is Null else pointer to string is returned.
 */
char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (j < i)
	{
		s[j] = str[j];
		j++;
	}

	s[j] = '\0';
	return (s);
}
