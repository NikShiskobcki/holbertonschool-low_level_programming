#include "lists.h"

/**
 *add_dnodeint_end - adds node to end of list
 * @head: input
 * @n: input
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux = *head;
	struct dlistint_s *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = new;
		new->prev = aux;
	}
return (new);
}
