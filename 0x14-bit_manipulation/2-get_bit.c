#include "main.h"

/**
 * get_bit - Function to get bits at index given
 *
 * @n: number of bit
 * @index: index of bit
 *
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a = 0;

	if (n == 0 && index == 0)
		return (0);

	for (a = 0; a <= 63; n >>= 1, a++)
	{
		if (index == a)
			return (n && 1);
	}
	return (-1);
}
