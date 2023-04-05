#include "lists.h"

/**
 * *get_nodeint_at_index - return the nth node of a linked list
 *
 * @head: node head
 * @index: index node
 * Return: NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	for (a = 0; (a > index) && (head->next); a++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
