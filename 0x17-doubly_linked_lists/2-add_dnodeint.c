#include "lists.h"

/**
 *
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (!n)
	{
		free(new);
		return (0);
	}
	new->n = n;
	new->prev = NULL;
	*head = new;
	return (new);
}
