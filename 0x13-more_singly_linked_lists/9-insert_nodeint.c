#include "lists.h"

/**
 *insert_nodeint_at_index - inserts node at index
 * @head: input
 * @idx: index
 * @n: input
 * Return: adress of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *aux = *head;
listint_t *new_node;
unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	while (aux && (i != (idx - 1)))
	{
		aux = aux->next;
		i++;
	}

	while (aux && (i == (idx - 1)))
	{
		new_node->next = aux->next;
		aux->next = new_node;
		return (new_node);
	}
	return (NULL);
}
