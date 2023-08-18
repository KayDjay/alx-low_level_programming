#include "lists.h"

/**
 * sum_dlistint - sum the data in a list
 *
 * @head: pointer to list
 *
 * Return: 0 or sum of the node
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *sum_nodes = head;
	int sum = 0;

	while (sum_nodes != NULL)
	{
		sum += sum_nodes->n;
		sum_nodes = sum_nodes->next;
	}
	return (sum);
}
