#include "lists.h"

/**
 * free_listint - Function that frees a list
 *
 * @head: node head
 *
 */

void free_listint(listint_t *head)
{
	listint_t*tmp;

	while (head != NULL)
	{
		tmp = head->next;
		head = tmp;
		free(head);
	}
}
