#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	const unsigned char *unsignedkey = (const unsigned char *)key;
	hash_node_t *item;

	if (!key)
		return (0);

	index = key_index(unsignedkey, ht->size);

	item = create_item(key, value);
	if (item == NULL)
		return (0);
	item->next = ht->array[index];
	ht->array[index] = item;

	return (1);
}

hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *ptr = malloc(sizeof(hash_node_t));

	if (ptr == NULL)
		return (NULL);

	ptr->key = strdup(key);
	ptr->value = strdup(value);
	ptr->next = NULL;

	return (ptr);
}
