#include <stdio.h>

/**
 * main - main function
 * @argc: the number of argumentes
 * @argv: the string
 * Return: void
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
