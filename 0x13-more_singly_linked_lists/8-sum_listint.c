#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 *
 * @head: head node
 *
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	int add;

	add = 0;
	while(head)

	{
		add += head->n;
		head = head->next;
	}
	return (add);
}


