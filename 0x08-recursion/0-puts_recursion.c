#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: pointer to string to be printed
 *
 * Return: none
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
}
