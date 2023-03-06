#include "main.h"

/**
 * _memcpy - function that copy memory bytes
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a =  0;
	int b = n;

	for (; a < b; b++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}

