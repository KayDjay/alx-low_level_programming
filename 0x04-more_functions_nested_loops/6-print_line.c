#include "main.h"

/**
 * print_line - function to print lines
 *
 * @n: number of times the charcter _ prints
 * Return: 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
