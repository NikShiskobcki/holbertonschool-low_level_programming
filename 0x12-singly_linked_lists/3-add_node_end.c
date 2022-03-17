#include "lists.h"

/**
 * add_node_end - adds node to end
 * @head: input
 * @str: input
 * Return: adress of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *aux;
	list_t *new_node, *x;
	unsigned int length = 0;
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	length = i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	aux = strdup(str);

	new_node->str = aux;
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		x = *head;
		while (x->next != NULL)
			x = x->next;
		x->next = new_node;
	}

return (*head);
}
