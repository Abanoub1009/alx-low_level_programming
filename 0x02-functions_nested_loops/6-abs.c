#include "main.h"

/**
 * _abs - checks for absolute value
 *
 * @a: parameter is to be checked
 *
 * Return: always a
 */

int _abs(a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
