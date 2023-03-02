#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps integer a with integer b and vice versa
 *@a: given integer
 *@b: 2nd given integer
 * Return: Swaped integers
 */
void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
