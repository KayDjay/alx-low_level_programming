#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers
 *
 * @min: minimum array
 * @max: maximum array
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr, a, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);

	for (a = 0; a < len; a++)
		arr[a] = min++;

	return (arr);
}
