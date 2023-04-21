#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a separator
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: variable number of arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(ptr, char*);

		if (str == NULL)
		{
			printf("nil");
			return;
		}
		else
		{
			printf("%s", str);
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
