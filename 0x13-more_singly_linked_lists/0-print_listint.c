#include "lists.h"

/**
 * print_listint - prints list of int
 * @h: input
 * Return: len
 */
size_t print_listint(const listint_t *h)
{
int len = 0;

	while (h != NULL)
	{
	printf("%i\n", h->n);
	len++;
	h = h->next;
	}

return (len);

}
