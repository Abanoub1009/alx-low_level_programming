#include "main.h"
/**
 * print_alphabet x10 : that prints alphabet in lower case x10
 *
 * Return: always 0;
 */


void print_alphabet_x10(void)
{
	int i = 0;
	char z;

	while (i <= 10)
	{
		for (z = 'a' ; z <= 'z' ; z++)
			_putchar(z);
		i++;
	}
	_putchar('\n');
}
