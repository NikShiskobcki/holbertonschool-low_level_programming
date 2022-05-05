#include "lists.h"

/**
 *add_dnodeint_end - adds node to end of list
 * @head: input
 * @n: input
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux = *head;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	if (!n)
	{
		free(new);
		return (0);
	}
	new->n = n;
	if (head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		head = new;
	}
	else
	{
		while(aux->next != NULL)
			aux = aux->next;
		aux->next = new;
	}
return (new);
}
