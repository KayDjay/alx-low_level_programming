#include "lists.h"

/**
 * delete_nodeint_at_index - a function that delete the node
 *
 * @head: head nodes
 * @index: index node
 *
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int del;

	listint_t *h, *tmp = *head;

	if (tmp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (del = 0; del < (index - 1); del++)
	{
		if (tmp->next == NULL)
			return (-1);
	}

	h = tmp->next;
	tmp->next = h->next;
	free(h);
	return (1);
}
