#include "lists.h"

/**
 * free_listint - frees list
 * @head: input
 *
 */
void free_listint(listint_t *head)
{
listint_t *aux;
	if (head != NULL)
	{
		while (head->next)
		{
		aux = head;
		head = head->next;
		free(aux);
		}
	free(head);
	}
}
