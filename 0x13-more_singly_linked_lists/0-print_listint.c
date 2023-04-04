#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list
 *
 * @h : node head
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)

{
	size_t a = 0;

	while (h)
	{
		a++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
