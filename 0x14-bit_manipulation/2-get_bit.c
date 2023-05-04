#include "main.h"

/**
 * get_bit - A function that get bits
 *
 * @n: number of bit
 * @index: index of bit
 *
 * Return: value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a = 0;

	if (n == 0 && index < 64)
		return (0);

	for (; a <= 63; n >>= 1, a++)
	{
		if (index == a)
			return (n && 1);
	}
	return (a);
}
