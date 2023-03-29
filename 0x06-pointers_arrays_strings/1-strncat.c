#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to concatenate from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
char *p = dest + strlen(dest);
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
p[i] = src[i];
}
p[i] = '\0';
return (dest);
}
