#include "lists.h"

/**
 * get_nodeint_at_index - gets node
 * @head: input
 * @index: input
 * Return: head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int len = 0;

	while (head != NULL && len < index)
	{
		len++;
		head = head->next;
	}
	if (index > len)
		return (NULL);
	return (head);

}
