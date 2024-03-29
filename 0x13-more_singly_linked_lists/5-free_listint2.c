#include "lists.h"

/**
 * free_listint2 - function that frees a list
 *
 * @head: node head
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}

