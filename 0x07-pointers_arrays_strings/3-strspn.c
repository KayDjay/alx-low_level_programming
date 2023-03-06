#include "main.h"

/**
 * _strspn - length of a subtring
 * @s: Input
 * @accept: Input
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				a++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (0);
		}
		s++;
	}
	return (a);
}
