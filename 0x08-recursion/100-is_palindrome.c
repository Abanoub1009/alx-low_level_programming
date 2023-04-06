#include "main.h"

int len(char *s);
int is_palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = len(s);

	if (length <= 1)
	{
		return (1);
	}
	return (is_palindrome_helper(s, 0, length - 1));
}

/**
 * len - gets the length of a string
 * @s: the string to get the length of
 * Return: the length of s
 */
int len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + len(s + 1));
}

/**
 * is_palindrome_helper - recursively checks if a string is a palindrome
 * @s: the string to check
 * @start: the starting index to check from
 * @end: the ending index to check to
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] == s[end])
	{
		return (is_palindrome_helper(s, start + 1, end - 1));
	}
	return (0);
}
