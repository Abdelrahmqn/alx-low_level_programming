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
	hash_node_t *why_tmp;
	unsigned long int ind = key_index((const unsigned char *) key, ht->size);

	why_tmp = malloc(sizeof(hash_node_t));
	if (why_tmp == NULL)
	{
	return (NULL);
	}
	why_tmp = ht->array[ind];
	if (ht == NULL || key == NULL || *key == '\0')
	return (NULL);

	while (why_tmp != NULL)
	{
	if (strcmp(why_tmp->key, key) == 0)
	{
		return (why_tmp->value);
	why_tmp = why_tmp->next;
	}
	}

	return (NULL);
}
