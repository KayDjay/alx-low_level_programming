#include "main.h"

/**
 * get_bit - A function that get bits
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
		return (-1);

	a = (n >> index) & 1;

	return (a);
}
