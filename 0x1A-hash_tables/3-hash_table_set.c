#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates a key/value pair in the hash table.
 * @ht: Pointer to the hash table.
 * @key: Key to be added or updated. Must not be an empty string.
 * @value: Value associated with the key. Can be an empty string.
 *
 * Description:
 *   This function adds or updates a key/value
 *   pair in the specified hash table.
 *   If the key already exists in the hash table,
 *   the associated value is updated.
 *   If the key does not exist, a new node is added to the hash table.
 *   In case of a collision, the new node is added at the
 *   beginning of the list.
 *
 * Return:
 *   - Returns 1 if the operation succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	const unsigned char *unsignedkey = (const unsigned char *)key;
	hash_node_t *item, *current_array;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index(unsignedkey, ht->size);

	current_array = ht->array[index];

	/* Check if key already exists, update the value */
	while (current_array != NULL)
	{
		if (strcmp(key, current_array->key) == 0)
		{
			free(current_array->value);
			current_array->value = strdup(value);
			if (current_array == NULL)
				return (0);
			return (1);
		}
		current_array = current_array->next;
	}

	item = create_item(key, value);
	if (item == NULL)
		return (0);
	item->next = ht->array[index];
	ht->array[index] = item;

	return (1);
}

/**
 * create_item - Creates a new hash node for a key/value pair.
 * @key: Key for the new node.
 * @value: Value associated with the key.
 *
 * Description:
 *   This function creates a new hash node for a key/value pair.
 *   It allocates memory for the new node,
 *   duplicates the key and value strings,
 *   and initializes the pointers accordingly.
 *
 * Return:
 *   - Returns a pointer to the newly created hash node.
 *     If memory allocation fails or if key/value is NULL, returns NULL.
 */
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
