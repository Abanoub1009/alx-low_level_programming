#include "main.h"
#include <string.h>

/**
 * _strpbrk - function that locates the first occurrence in a string
 * of any of the bytes in a specified set
 * @s: the string to be searched
 * @accept: the set of bytes to be searched for
 *
 * Return: void
 */

char *_strpbrk(char *s, char *accept)
{
	char *x = strpbrk(s, accept);

	return (x);
}
