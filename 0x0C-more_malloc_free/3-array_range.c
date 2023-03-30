#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int *ptr;

	int i, size;

	if (min > max)
		return (NULL);
	
	size = max - min;

	ptr = malloc((sizeof(int) * size) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
