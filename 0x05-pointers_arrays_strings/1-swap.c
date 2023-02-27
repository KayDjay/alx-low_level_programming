#include "main.h"
#include <stdio.h>

/**
 * swap_int - To swap values of two integers
 *  @a: integer to swap
 *  @b: Integer to swap
 *  Return: 0
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

