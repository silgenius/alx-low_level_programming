#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *hash_table;

	hash_table = (hash_table_t*) malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	hash_table->array = (hash_node_t**) calloc(hash_table->size, sizeof(hash_node_t*));
	if (!hash_table->array)
		return (NULL);

	for (i = 0; i < hash_table->size; i++)
	{
		hash_table->array[i] = NULL;
	}
	
	return (hash_table);
}
