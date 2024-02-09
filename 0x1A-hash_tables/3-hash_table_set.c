#include "hash_tables.h"
#include <string.h>
/**
	* hash_table_set - is function to set a new element to the hash table.
	* @key: is key , the key of the value.
	* @value: is the value of the element that must be duplicated.
	* @ht: is the hash table.
	*
	* Return: on success return 1, otherwise return 0.
	*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element;
	unsigned long int ind = key_index((const unsigned char *) key, ht->size);

	if (key == NULL || ht == NULL || *key == '\0' || value == NULL)
	return (0);
	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (0);
	new_element->key = strdup(key);
	if (new_element->key == NULL)
	{
		free(new_element);
	}
	new_element->value = strdup(value);
	if (new_element->value == NULL)
	{
		free(new_element->value);
		free(new_element);
		return (0);
	}
	for (; ht->array[ind] != NULL;)
	{
		if (strcmp(ht->array[ind]->key, key) == 0)
		{
			free(ht->array[ind]->value);
			ht->array[ind]->value = strdup(value);
		if (ht->array[ind]->value == NULL)
			return (0);
		return (1);
		}
		ht->array[ind] = ht->array[ind]->next;
	}
		new_element->next = ht->array[ind];
		ht->array[ind] = new_element;
	return (1);
}
