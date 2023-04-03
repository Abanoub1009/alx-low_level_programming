#include "main.h"
#include <string.h>

/**
 * _memcpy - function that copies memory area.
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: number of bytes to copy
 *
 * Return: a pointer to the destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
