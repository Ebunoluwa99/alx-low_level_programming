#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to allocated memory
 */

int *array_range(int min, int max)
{
	int *arr, diff, num, i;

	if (min > max)
		return (NULL);
	diff = max - min + 1;
	arr = malloc(diff * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (num = min, i = 0; num <= max && i < diff; num++, i++)
		arr[i] = num;

	return (arr);
}
