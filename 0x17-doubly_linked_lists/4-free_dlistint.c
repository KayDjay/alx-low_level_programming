#include "lists.h"

/**
 * free_dlistint - free the dlistint_t list
 *
 * @head: list to be free pointer
 *
 * Return: free list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *end = head;

	while (end != NULL)
	{
		dlistint_t *next = end->next;

		free(end);

		end = next;
	}
}
