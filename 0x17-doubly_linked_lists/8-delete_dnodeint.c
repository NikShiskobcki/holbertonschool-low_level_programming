#include "lists.h"

/**
 *
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *node = *head;
dlistint_t *r;

	if (node == NULL)
		return (-1);
	if (index == 0)
	{
		r = *head;
		*head = r->next;
		if(node != NULL)
			node->prev =NULL;
		free(r);
		return (1);

	}
	while (i != (index - 1) && node)
	{
		node = node->next;
		i++;
	}
	if (node && (i == (index - 1)))
	{
		r = node->next;
		node->next = node->next->next;
		if (node->next->next != NULL)
			node->next->next->prev = node->next;
		free(r);
		return (1);
	}
	return (-1);
}
