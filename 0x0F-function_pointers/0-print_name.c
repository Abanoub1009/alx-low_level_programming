#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a given function
 *
 * @name: The name to be printed
 * @f: A pointer to the function to be used to print the name
 */

void print_name(char *name, void (*f)(char *))
{
	f (name);
	_putchar(f + '0');
}
