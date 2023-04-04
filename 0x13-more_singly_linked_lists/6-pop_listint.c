#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 *
 * @head: node pointer
 *
 * Return: the head nodes
 * or 0 when the list is empty
 */

int pop_listint(listint_t **head)
{
	int h;
	listint_t *a;

	if (*head == NULL)
		return (0);

	h = (*head)->n;
	a = (*head)->next;
	free(*head);
	*head = a;

	return (h);
}
