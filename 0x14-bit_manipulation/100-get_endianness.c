#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 *
 * Return: 0 or 1
 */

int get_endianness(void)
{
	int a = 1;
	char *c = (char *)&a;

	if (*c == 1)
	return (1);

	return (0);
}
