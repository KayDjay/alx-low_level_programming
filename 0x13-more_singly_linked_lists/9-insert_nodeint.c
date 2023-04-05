#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts new node
 *
 * @head: node head
 * @idx: index of the list
 * @n: node integer
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *new, *tmp;

	tmp = *head;

	if (idx != 0)
	{
		for (a = 0; a < idx - 1 && tmp != NULL; a++)
		{
			tmp = tmp->next;
		}
	}

	if (tmp == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = tmp->next;
		tmp->next = new;
	}

	return (new);
}
