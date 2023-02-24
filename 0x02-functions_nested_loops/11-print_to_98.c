#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers
 *
 * Return: 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = 0 ; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (n = 0 ; n >= 98 ; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				Printf("%d, ", n);
			}
		}
	}
}
