#include "main.h"

/**
 * char*_strcpy - a function to copy string pointed
 * @dest: return value
 * @src: source value
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0' ; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
