#include "lists.h"

/**
 * add_nodeint_end - adds node to end
 * @head: input
 * @n: input
 * Return: aux
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *aux, *x = *head;

	aux = malloc(sizeof(listint_t));
	if (aux == NULL)
	{
		return (NULL);
	}

	aux->n = n;
	aux->next = NULL;

	if (x == NULL)
		*head = aux;
	else
	{
	while (x->next != NULL)
		x = x->next;
	x->next = aux;

	}
return (aux);

}
