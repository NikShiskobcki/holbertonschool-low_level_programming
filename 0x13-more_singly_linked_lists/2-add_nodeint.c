#include "lists.h"

/**
 * add_nodeint - adds node at beginning of list
 * @head: input
 * @n: input
 * Return: adress of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	int aux;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	aux = n;

	new_node->n = aux;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
