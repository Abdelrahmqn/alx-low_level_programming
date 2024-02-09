#include "hash_tables.h"
#include <string.h>
/**
* hash_table_get - from where we get the key.
* @ht: the hash table.
* @key: the key of the element or value.
*
* Return: value associated with the element, or NULL if key couldn’t be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind = key_index((const unsigned char *) key, ht->size);


	if (ht == NULL || key == NULL || *key == '\0')
	return (NULL);

	while (ht->array[ind] != NULL)
	{
	if (strcmp(ht->array[ind]->key, key) == 0)
	{
		return (ht->array[ind]->value);
	ht->array[ind] = ht->array[ind]->next;
	}
	}

	return (NULL);
}
