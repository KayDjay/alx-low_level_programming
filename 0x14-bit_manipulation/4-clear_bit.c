#include "main.h"

/**
 * clear_bit - A function that clears bit to zero
 *
 * @n: number of bit
 * @index: index of bit
 *
 * Return: (1) success, otherwise (-1)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;

	if (*n & a)
		*n ^= a;

	return (1);
}
