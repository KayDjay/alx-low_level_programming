#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 *
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}
	return (a);
}
