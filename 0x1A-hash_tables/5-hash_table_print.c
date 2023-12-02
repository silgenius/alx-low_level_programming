#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of the hash table.
 * @ht: Pointer to the hash table to be printed.
 *
 * Description:
 *   This function prints the key/value pairs in the order they appear
 *   in the array of the hash table.
 *   It prints both the array and the linked lists.
 *   The output format follows the specified example.
 *
 * Note:
 *   - If ht is NULL, the function doesn't print anything.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, x;
	hash_node_t *array;

	x = 0;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			x++;
			array = ht->array[i];
			while (array != NULL)
			{
				if (x != 1 && ht->array[i - 1] == NULL)
					printf(", ");
				printf("\'%s\': \'%s\'", array->key, array->value);
				array = array->next;

				if (ht->array[i + 1] != NULL && i < ht->size - 1)
					printf(", ");
			}
		}
	}

	printf("}\n");
}
