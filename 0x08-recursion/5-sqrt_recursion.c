#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to compute the square root of
 * @low: The lower bound of the search range
 * @high: The upper bound of the search range
 * Return: the natural square root of n, or -1 if n does not have one
 */
int _sqrt_helper(int n, int low, int high);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0, n));
}

/**
 * _sqrt_helper - A recursive helper function to find the square root of n
 * @n: The number to compute the square root of
 * @low: The lower bound of the search range
 * @high: The upper bound of the search range
 *
 * Return: The natural square root of n, or -1 if n does not have one
 */
int _sqrt_helper(int n, int low, int high)
{
	int mid, x;

	if (low > high)
	{
		return (-1);
	}
	mid = (low + high) / 2;
	x = mid * mid;
	if (x == n)
	{
		return (mid);
	}
	else if (x < n)
	{
		return (_sqrt_helper(n, mid + 1, high));
	}
	else
	{
		return (_sqrt_helper(n, low, mid - 1));
	}
}
