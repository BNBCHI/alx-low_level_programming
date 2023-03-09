#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @src: source area to copy
 * @dest: destination of copied area
 * @n: number of copied bytes
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
