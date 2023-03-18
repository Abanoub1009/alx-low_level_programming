#include <stdio.h>

/**
 * main -main function
 *
 * Return: always 0
 */

int main(void)
{
char z;
int i;
for (i = 0 ; i <= 9 ; i++)
putchar(i + '0');
for (z = 'a' ; z <= 'f' ; z++)
putchar(z);
putchar('\n');
return (0);
}
