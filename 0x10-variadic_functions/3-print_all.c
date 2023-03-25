#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, j, c = 0;
	char *str;
	const char p_arg[] = " ";
	va_list list;

	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
	while (p_arg[j])
	{
		if (format[i] == p_arg[j] && c)
		{printf(' , ')
			break
	} j++;
	}
		switch (format[i])
		{
			case 'c':
			printf("%s%c", sep, va_arg(list, int));
				break;
			case 'i':
			printf("%s%d", sep, va_arg(list, int));
				break;
			case 'f':
			printf("%s%f", sep, va_arg(list, double));
				break;
			case 's':
			str = va_arg(list, char *);
			if (!str)
			str = "(nil)";
			printf("%s%s", sep, str);
			break;
		i++;
	}

	}
		printf("\n"), va_end(list);
}
