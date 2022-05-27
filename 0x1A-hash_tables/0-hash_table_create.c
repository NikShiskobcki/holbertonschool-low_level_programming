#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashT = NULL;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	hashT = malloc(sizeof(hash_node_t *) * size);
	if (hashT == NULL)
		return (NULL);

	hashT->array = malloc(sizeof(hash_node_t *) * size);
	if (hashT->array == NULL)
	{
		free(hashT);
		return (NULL);
	}
	hashT->size = size;
	for (i = 0; i < size; i++)
		hashT->array[i] = NULL;
	return (hashT);
}
