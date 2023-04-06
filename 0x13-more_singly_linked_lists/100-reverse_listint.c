#include "lists.h"

/**
 * *reverse_listint - a function that reverses a linked list
 * @head: node head
 *
 * Return: first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *list = NULL;
	listint_t *rev = NULL;

	while (*head)
	{
		list = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = list;
	}
	 *head = rev;

	return (*head);
}

