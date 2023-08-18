#include "lists.h"

/**
 * dlistint_len - returns the number of an element in the linked list
 *
 * @h: list of the elements
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_no = 0;

	while (h != NULL)
	{
		node_no++;
		h = h->next;
	}
	return (node_no);
}
