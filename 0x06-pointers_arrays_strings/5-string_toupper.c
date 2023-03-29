#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: The string to modify
 *
 * Return: The modified string
 */
char *string_toupper(char *str)
{
char *new_str = (char *)malloc(strlen(str) + 1);
int i = 0;
while (str[i] != '\0')
{
new_str[i] = toupper(str[i]);
i++;
}
new_str[i] = '\0';
return (new_str);
}
