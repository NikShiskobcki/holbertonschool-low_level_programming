#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
/**
 * add_node - adds node at the beginning of list
 * @head: input
 * @str: input
 * Return: adsress of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *aux;
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
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
