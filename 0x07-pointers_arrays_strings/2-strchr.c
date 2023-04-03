#include "main.h"
#include <string.h>

/**
 * _strchr - function that locates a character in a string
 * @s: the string to be searched
 * @c: the character to be located
 *
 * Return: void
 */

char *_strchr(char *s, char c)
{
	char *b = strchr(s, c);

	if (b == NULL)
	{
		return (NULL);
	}
	else
		return (b);
}
