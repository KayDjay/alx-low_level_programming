#include "search_algos.h"

/**
 * advanced_binary_recursive - to perform recursive binary search
 * @array: array to be searched
 * @left: left of element
 * @right: right of element
 * @value: value to search for
 * Return: return index of value or (-1)
 */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - Funcion that searches for a value in a sorted array
 * @array : pointer to array
 * @size : number of elements
 * @value : value to search for
 * Return: return index of value or (-1)
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
