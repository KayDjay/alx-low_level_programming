#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - a function that adds all parameters
 *@n: The number of int to be sum
 *
 * Return: sum always
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, int);
		}

		va_end(ap);
		return (sum);
}
