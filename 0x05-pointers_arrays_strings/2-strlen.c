#include "main.h"
#include <stdio.h>

/**
 * _strlen - checks the length of a string and returns the length value
 *@s: pointer to a char in the pointed string.
 * Return: Value of length of string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	;

	return (count);
}
