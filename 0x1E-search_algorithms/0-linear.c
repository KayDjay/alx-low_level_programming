#include "search_algos.h"

/**
 * Binary_search - function that searches for a value in a sorted array
 * 		   of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: number of element in array
 * @value: value to search for
 * Return: index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	/* Check_if_the input_array_is NULL */
	if (array == NULL)
		return (-1);

	/* iterate_through the_array */
	for (i = 0; i < size; i++)
	{
		/* print_the_comparison_being_made */
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		/* if_value_is found_return the_index */
		if (array[i] == value)
			return (i);
	}
	/* Value_not_found in_the_array */
	return (-1);
}
