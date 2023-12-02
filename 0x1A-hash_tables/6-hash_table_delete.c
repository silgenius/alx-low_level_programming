#include "hash_tables.h"

/**
 * free_array - Frees the memory used by a hash table's array.
 * @array: Pointer to the array of hash nodes.
 *
 * Description:
 *   This function frees the memory used by a hash
 *   table's array,
 *   including all the hash nodes in linked lists.
 */
void free_array(hash_node_t *array)
{
	hash_node_t *ptr;

	while (array != NULL)
	{
		ptr = array->next;

		free(array->key);
		free(array->value);
		free(array);

		array = ptr;
	}
}

/**
 * hash_table_delete - Deletes a hash table and its contents.
 * @ht: Pointer to the hash table to be deleted.
 *
 * Description:
 *   This function deletes the specified hash table
 *   along with its contents.
 *   It frees the memory allocated for the hash table
 *   structure, array, keys, and values.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		free_array(ht->array[i]);
	}

	free(ht->array);
	free(ht);
}
