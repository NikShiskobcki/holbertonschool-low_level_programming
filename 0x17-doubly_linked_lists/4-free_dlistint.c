#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: input
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;
	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
