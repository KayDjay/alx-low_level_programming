#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int change(int cents);

/**
 * main - Entry Point
 *
 * @argc: arguments
 * @argv: array pointing to arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argc < 0)
	{
		return (0);
	}

	printf("%d\n", change(atoi(argv[1])));
	return (0);
}

/**
 * change - get change
 *
 * @cents: amount of coins from main function
 *
 * Return: change
 */

int change(int cents)
{
	int a = 25, b = 10, n = 5, s = 2, t = 1;
	int coins;

	while (cents > 0)
	{
		while (cents >= a)
		{
			cents -= a;
			coins++;
		}
		while (cents >= b)
		{
			cents -= b;
			coins++;
		}
		while (cents >= n)
		{
			cents -= n;
			coins++;
		}
		while (cents >= s)
		{
			cents -= s;
			coins++;
		}
		while (cents >= t)
		{
			cents -= t;
			coins++;
		}
	}
	return (coins);
}
