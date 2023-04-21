#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * @...: variable number of arguments
 *
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list count;
	unsigned int i;
	int x = 0;

	va_start(count, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		x += va_arg(count, int);
	}
	va_end(count);
	return (x);
}
