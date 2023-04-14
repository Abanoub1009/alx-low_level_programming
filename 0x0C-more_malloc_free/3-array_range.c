#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max
 *
 * @min: Minimum value (included) in array
 * @max: Maximum value (included) in array
 *
 * Return: void
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min++;
	return (arr);
}
