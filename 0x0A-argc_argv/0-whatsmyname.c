#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of argument
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("argc = %s\n", *argv);
	return (0);
}