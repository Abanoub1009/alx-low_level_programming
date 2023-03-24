#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: always 0
 */

void more_numbers(void)
{
	int i;
	int z;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (z = 0 ; z <= 14 ; z++)
		{
			if (z >= 10)
				_putchar(z / 10 + '0');
			_putchar(z % 10 + '0');
		}
		_putchar('\n');
	}
}
