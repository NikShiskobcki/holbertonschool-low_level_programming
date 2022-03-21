#include "lists.h"

/**
 * listint_len - length of litt
 * @h: input
 * Return: length
 */
size_t listint_len(const listint_t *h)
{
int len = 0;
	while (h != NULL)
	{
	len++;
	h = h->next;
	}
return (len);
}
