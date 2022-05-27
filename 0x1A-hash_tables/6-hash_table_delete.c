#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash tables
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *p = NULL;
	hash_node_t *aux = NULL;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux)
		{
			p = aux;
			aux = aux->next;
			free(p->key);
			free(p->value);
			free(p);
		}
	}
	free(ht->array);
	free(ht);
}
