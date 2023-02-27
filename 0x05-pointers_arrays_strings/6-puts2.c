#include "main.h"

/**
 * puts2 - print first string character
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
	int len = 0;
	int n = 0;
	char *s = str;
	int i;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	n = len - 1;
	for (i = 0 ; i <= n ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
