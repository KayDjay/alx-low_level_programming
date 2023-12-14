#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted array of
 *		integers using the Jump search algorithm
 * @array : jump search pointer
 * @size : number of elements in array
 * @value : value to search for
 * Return: position where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, prev;
	size_t jump_step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	for (i = prev = 0; prev < size && array[prev] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[prev]);
		i = prev;
		prev += jump_step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, prev);

	prev = prev < size - 1 ? prev : size - 1;
	for (; i < prev && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
