#include <stdio.h>

/**
 * main - main function
 * @argc: the zize of argv
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
