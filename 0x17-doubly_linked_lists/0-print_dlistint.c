#include "lists.h"
/**
 * print_dlistint - prints doubly linked list
 *@h: input
 *Return: size
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *nodo = h;
	size_t i = 0;

	while (n != NULL)
	{ printf("%i\n", nodo->n);
		i++;
		nodo = nodo->next;
	}
	return (i);
}
