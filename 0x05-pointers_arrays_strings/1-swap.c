#include "main.h"

/**
 * swap_int - that swaps the values of two integers.
 * @a: first integer input
 * @b: secound integer input
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
