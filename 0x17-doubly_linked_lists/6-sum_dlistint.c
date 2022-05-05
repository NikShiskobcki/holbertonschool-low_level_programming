#include "lists.h"

/**
 *
 *
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	if (node == NULL)
		return (0);
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
