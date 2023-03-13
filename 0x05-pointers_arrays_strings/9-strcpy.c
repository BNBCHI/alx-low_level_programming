#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies a string from src to dest
 *@src: initial string
 *@dest: copy of initial string
 *Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char old[100];

	dest = old;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		printf("%s\n", src);
		printf("%s\n", dest);
	}
		return (dest);
}
