#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: pointer to the first occurrence of any character in
 * accept in the string s, or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
