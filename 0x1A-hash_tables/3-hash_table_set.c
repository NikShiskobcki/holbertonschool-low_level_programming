#include "hash_tables.h"

/**
 *hash_table_set - adds element to hash table
 *@ht: hash table
 *@key: key
 *@value: value
 *Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new = NULL;

	if ((ht == NULL) || (key == NULL) || (value == NULL))
		return (1);

	idx = key_index((unsigned char *)key, ht->size);

	if (ht->array[idx] != NULL && (strcmp(ht->array[idx]->key, key) == 0))
	{
		free(ht->array[idx]->value);
		ht->array[idx]->value = strdup(value);
		return (1);
	}
	new = malloc(sizeof(hash_node_t *));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
