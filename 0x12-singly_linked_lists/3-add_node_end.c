#include "lists.h"

/**
 * add_node_end - adds node to end
 * @head: input
 * @str: input
 * Return: list.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *aux, *x = *head;

	aux = malloc(sizeof(list_t));

	if (aux == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		free(aux);
		return (NULL);
	}

	aux->str = strdup(str);
	aux->len = strlen(str);
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
