#include "main.h"

/**
 * set_bit - A function that set bit value
 *
 * @n: number of bit
 * @index: index of bit
 *
 * Return: index of bit otherwise (-1)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;
	*n = (*n | a);

	return (1);
}

