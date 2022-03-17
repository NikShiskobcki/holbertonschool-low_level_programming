#include "lists.h"

/**
 * list_len - list length
 * @h: input
 * Return: list length
 */
size_t list_len(const list_t *h)
{
int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
