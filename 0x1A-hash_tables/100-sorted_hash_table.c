#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the created hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table = malloc(sizeof(shash_table_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = calloc(size, sizeof(shash_node_t *));

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	hash_table->shead = NULL;
	hash_table->stail = NULL;

	return (hash_table);
}

/**
 * shash_table_set - Inserts a key/value pair into the sorted hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value
 *
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	/* Initialize a new node */
	new_node = malloc(sizeof(shash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	/* Insert into sorted linked list */
	insert_into_sorted_list(ht, new_node);

	/* Insert into hash table array */
	insert_into_array(ht, new_node);

	return (1);
}

/**
 * insert_into_sorted_list - Inserts a node into the sorted linked list
 * @ht: The hash table
 * @new_node: The node to insert
 */
void insert_into_sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *prev, *current;

	if (ht == NULL || new_node == NULL)
		return;

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		new_node->sprev = NULL;
		new_node->snext = NULL;
	}
	else
	{
		current = ht->shead;
		prev = NULL;

		while (current != NULL && strcmp(current->key, new_node->key) < 0)
		{
			prev = current;
			current = current->snext;
		}

		if (prev == NULL)
		{
			/* Insert at the beginning of the list */
			new_node->snext = ht->shead;
			new_node->sprev = NULL;
			ht->shead->sprev = new_node;
			ht->shead = new_node;
		}

		else if (current == NULL)
		{
			/* Insert at the end of the list */
			new_node->snext = NULL;
			new_node->sprev = ht->stail;
			ht->stail->snext = new_node;
			ht->stail = new_node;
		}

		else
		{
			/* Insert in the middle of the list */
			new_node->snext = current;
			new_node->sprev = prev;
			prev->snext = new_node;
			current->sprev = new_node;
		}
	}
}

/**
 * insert_into_array - Inserts a node into the hash table array
 * @ht: The hash table
 * @new_node: The node to insert
 */
void insert_into_array(shash_table_t *ht, shash_node_t *new_node)
{
	unsigned long int index;

	if (ht == NULL || new_node == NULL)
		return;

	index = key_index((const unsigned char *) new_node->key, ht->size);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
}

/**
 * shash_table_get - Retrieves the value associated with a key in the hash table
 * @ht: The hash table
 * @key: The key
 *
 * Return: The value associated with the key, or NULL if the key is not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints the hash table using
 * the sorted linked list
 * @ht: The hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->shead;

	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		if (current != NULL)
			printf(", ");
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the hash table in reverse
 * order using the sorted linked list
 * @ht: The hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->stail;

	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		if (current != NULL)
			printf(", ");
	}

	printf("}\n");
}

/**
 * shash_table_delete - Deletes a hash table and its nodes
 * @ht: The hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *tmp;

	if (ht == NULL)
		return;

	/* Delete nodes in the sorted linked list */
	current = ht->shead;
	while (current != NULL)
	{
		tmp = current;
		current = current->snext;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}

    /* Delete the array and the hash table itself */
	free(ht->array);
	free(ht);
}
