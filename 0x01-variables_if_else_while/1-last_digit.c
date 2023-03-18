#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main -main function
*
* Return: always 0(success)
*/
int main(void)
{
int n;
/* your code goes there */
printf("Last digit of %d is %d ", n, n % 10);
if (n % 10 > 5)
printf("and is greater than 5\n");
else if (n % 10 == 0)
printf("and is 0\n");
else
printf("and is less than 6 and not 0\n");
return (0);
}
