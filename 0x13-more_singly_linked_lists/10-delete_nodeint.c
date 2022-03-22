#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: input
 * @index: input
 * Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *aux = *head;
listint_t *r;
unsigned int i = 0;

	if (aux == NULL)
		return (-1);
	if (index == 0)
	{
		r = *head;
		*head = r->next;
		free(r);
		return (1);
	}

	while (i != (index - 1) && aux)
	{
		aux = aux->next;
		i++;
	}
	if (aux && (i == (index - 1)))
	{
		r = aux->next;
		aux->next = r->next;
		free(r);
		return (1);
	}
return (-1);
}
