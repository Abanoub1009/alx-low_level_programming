#include <stdio.h>

/**
 * main -main function
 *
 * Return: always 0
 */

int main(void)
{
char i;
char y;
for (i = 'a' ; i <= 'z' ; i++)
putchar(i);
for (y = 'A' ; y <= 'Z' ; y++)
putchar(y);
putchar('\n');
return (0);
}
