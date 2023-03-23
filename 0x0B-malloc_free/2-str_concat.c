#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	
	l = i + j;
	conct = malloc((sizeof(char) * l) + 1);

	j = 0;

	while (k < l)
	{
		if (k <= i)
			conct[k] = s1[k];

		if (k >= i)
		{
			conct[k] = s2[k];
			j++;
		}
		k++;
	}
	conct[k] = '\0';
	return (conct);
}
