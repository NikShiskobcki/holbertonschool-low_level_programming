#include "lists.h"

/**
 *add_dnodeint - adds node to beginning of list
 * @head: input
 * @n: input
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	struct dlistint_s *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	
	if (*head != NULL)
		(*head)->prev = new;

	*head = new;
	return (new);
}
