#include "main.h"

/**
 * set_string - Sets the value of a pointer to a string
 * @s: The pointer to the string to be set
 * @to: The string to set the pointer to
 *
 * Return: None
 */

void set_string(char **s, char *to)
{
	*s = to;
}
