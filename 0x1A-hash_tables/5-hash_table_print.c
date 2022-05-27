#include "hash_tables.h"

/**
 *hash_table_print - prints hash table
 *@ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *p = NULL;
	char *n = NULL;

	if (ht == NULL)
		return;

	printf("{");
	n = "";
	for (i = 0; i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			printf("%s'%s': '%s'", n, p->key, p->value);
			n = ", ";
			p = p->next;
		}

	}
	printf("}\n");
}
