#include "main.h"
#include <string.h>

/**
 * print_chessboard - Prints a chessboard
 * @a: The 2D array of characters representing the chessboard
 *
 * Return: None
 */

void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[i][n]);
		_putchar('\n');
	}
}
