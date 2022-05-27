#include "hash_tables.h"
/**
 * hash_table_get - gets value from hash table
 *@ht: hash table
 *@key: key
 *Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;

	if ((ht == NULL) || (key == NULL))
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	while (ht->array[idx])
	{
		if (strcmp(ht->array[idx]->key, key) = 0)
			return (ht->array[idx]->value);
		ht->array[idx] = ht->array[idx]->next;
	}
	return (NULL);
}
