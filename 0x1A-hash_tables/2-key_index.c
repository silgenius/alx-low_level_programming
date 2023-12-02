#include "hash_tables.h"

/**
 * key_index - Computes the index at which the key/value pair should be stored.
 * @key: Pointer to an array of characters representing the key.
 * @size: Size of the array of the hash table.
 *
 * Description:
 *   This function uses the hash_djb2 function to compute the hash value
 *   of the given key and maps it to an index within the specified size.
 *   The resulting index is where the key/value pair should be stored
 *   in the array of the hash table.
 * Return:
 *   - Returns the index at which the key/value pair should be stored
 *     in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	hash_value %= size;

	return (hash_value);
}
