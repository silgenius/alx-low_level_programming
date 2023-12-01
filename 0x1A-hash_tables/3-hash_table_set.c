#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	const unsigned char *unsignedkey = (const unsigned char *)key;
	hash_node_t *item, *head_ptr;

	if (!key)
		return (0);

	index = key_index(unsignedkey, ht->size);
	
	if (!((ht->array)[index]))
	{
		head_ptr = malloc(sizeof(hash_node_t));
		if (!head_ptr)
			return (0);

		head_ptr = NULL;
		ht->array[index] = head_ptr;
	}

	item = create_item(ht->array[index], key, value);
	if (item == NULL)
		return (0);

	return (1);
}

hash_node_t *create_item(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *ptr = malloc(sizeof(hash_node_t));

	if (!ptr)
		return (NULL);

	ptr->key = strdup(key);
	ptr->value = strdup(value);
	ptr->next = head;

	head = ptr;

	return (head);
}
