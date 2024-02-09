#include "hash_tables.h"
/**
* hash_table_delete - function frees the hash table.
* @ht: hash table .
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *_important_variable_to_save_;
	unsigned int i;

	for (i = 0; i < ht->size; i++)
	{
	temp = ht->array[i];
	while (temp != NULL)
	{
	_important_variable_to_save_ = temp->next;
	free(temp->key);
	free(temp->value);
	free(temp);
	temp = _important_variable_to_save_;
	}
	}
	free(ht->array);
	free(ht);
}
