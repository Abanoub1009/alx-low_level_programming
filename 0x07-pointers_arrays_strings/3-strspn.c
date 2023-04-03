#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 *           consisting of only characters from a set of bytes
 * @s: the string to be searched
 * @accept: the set of bytes to be searched for
 *
 * Return: void
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = strspn(s, accept);

	return (x);
}
