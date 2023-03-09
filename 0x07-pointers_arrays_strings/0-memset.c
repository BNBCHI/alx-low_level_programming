#include "main.h"
#include <stdio.h>
/**
 * _memset - Fills memory with a constant byte
 *@s: pointer to memory area
 *@b: the byte filling the memory areas
 *@n: number of bytes of memory area spots to fill
 * Return: Pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
