#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates a substring in a string
 * @haystack: the string to be searched
 * @needle: the substring to be located
 *
 * Return: void
 */

char *_strstr(char *haystack, char *needle)
{
	char *x = strstr(haystack, needle);

	if (x == 0)
	{
		return (NULL);
	}
	else
		return (x);
}
