#include "search_algos.h"

/**
 * binary_search - binary search algorithm
 *
 * @array: pointer to the first element of the array to saerch in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: return index of value or (-1)
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, begin = 0, mid;
	size_t end = size - 1;

	if (array == NULL)
		return (-1);

	while (begin <= end)
	{
		mid = begin + ((end - begin) / 2);

		printf("Searching in array: ");
		for (i = begin; i <= end; ++i)
		{
			printf("%d", array[i]);

			if (i < end)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}

	return (-1);
}
