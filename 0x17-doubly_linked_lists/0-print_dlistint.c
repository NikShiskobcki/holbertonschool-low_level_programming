#include "lists.h"
/**
 * print_dlistint - prints doubly linked list
 *@h: input
 *Return: size
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *nodo = h;
	size_t i = 0;

	while (nodo != NULL)
	{ 
		printf("%i\n", nodo->n);
		i++;
		nodo = nodo->next;
	}
	return (i);
}
