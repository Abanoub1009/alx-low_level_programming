#include "main.h"
#include <string.h>

/**
 * _memset - that fills memory with a constant byte
 * @s: the first string
 * @b: the char
 * @n: the integer
 *
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
