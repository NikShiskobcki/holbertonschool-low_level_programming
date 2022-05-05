#include "lists.h"

/**
 *insert_dnodeint_at_index - insters node at index
 * @h: input
 * @idx: input
 * @n: input
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *node = *h;
dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (node && (i != (idx - 1)))
	{
		node = node->next;
		i++;

	}
	while (node && (i == (idx - 1)))
	{
		new->prev = node;
		new->next = node->next;
		if (node->next)
			node->next->prev = new;
		node->next = new;
		return (new);
	}
	return (NULL);
}
