#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: input
 * @index: input
 * Return: 1 on success, -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
unsigned int auxIdx;
dlistint_t *old = *head;
dlistint_t *aux = *head;

	if ((!(*head)) || (index != 0 && !(*head)->next))
		return (-1);

	if (index == 0)
	{
		*head = old->next;
		free(old);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	auxIdx = index - 1;

	while (aux && i != auxIdx)
	{
		i++;
		aux = aux->next;
	}
	if (i == auxIdx && aux)
	{
		old = aux->next;
		if (old->next)
			old->next->prev = aux;
		aux->next = old->next;
		free(old);
		return (1);
	}
	return (-1);
}
