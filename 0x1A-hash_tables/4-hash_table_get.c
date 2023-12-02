#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a specified key.
 * @ht: Pointer to the hash table to look into.
 * @key: Key to search for in the hash table.
 *
 * Description:
 *   This function retrieves the value associated with the specified key
 *   from the given hash table. If the key is found, it returns a pointer
 *   to the associated value. If the key couldn't be found, the function
 *   returns NULL.
 *
 * Return:
 *   - Returns a pointer to the value associated with the key.
 *     If the key is not found, returns NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}

	return (NULL);
}
