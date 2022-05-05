#include "lists.h"

/**
 *dlistint_len - gets list length
 * @h: input
 * Return: size
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *nodo = h;
	size_t i = 0;

	while (nodo != NULL)
	{
		i++;
		nodo = nodo->next;
	}
	return (i);
}
