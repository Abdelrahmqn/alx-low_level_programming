#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - creates a hash table.
 * @size: the size of the hash table
 *
 * Return: a pointer to the newly created hash table,
 * if something went wrong, your function should return NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
	return (NULL);
	}

	table->size = size;

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
	free(table);
	return (NULL);
	}

	while (i < size)
	{
	table->array[i] = NULL;
	i++;
	}

	return (table);
}
