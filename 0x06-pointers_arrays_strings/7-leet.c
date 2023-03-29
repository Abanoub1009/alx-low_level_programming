#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
char *s = str;
char *letters = "aAeEoOtTlL";
char *leet = "4433007711";
int i, j;

while (*s)
{
j = 0;
while (letters[j])
{
if (*s == letters[j])
{
*s = leet[j];
}
j++;
}
s++;
}
return (str);
}
