#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at an index
 *
 * @h: node to be inserted
 * @idx: index of the new node
 * @n: index to be moved
 *
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *move_node;
	unsigned int a = 0;

	if (h == NULL || (idx > 0 && *h == NULL))
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	move_node = *h;
	for (a = 1; a < idx; a++)
	{
		if (move_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		move_node = move_node->next;
	}

	new_node->next = move_node->next;
	new_node->prev = move_node;
	if (move_node->next != NULL)
		move_node->next->prev = new_node;

	move_node->next = new_node;
	return (new_node);
}
