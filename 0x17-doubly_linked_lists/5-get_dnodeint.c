#include "lists.h"

/**
 *get_dnodeint_at_index - gets node at index
 * @head: input
 * @index: input
 * Return: node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = head;

	while (i != index && node)
	{
		i++;
		head = head->next;
	}
	if (i == index && node)
		return (node);
	return (NULL);
}
