#include "hash_tables.h"
/**
* hash_table_print - hash table to print.
*
* @ht: the hash table.
*
*/

void hash_table_print(const hash_table_t *ht)
{
	int adjustments = 1;
	unsigned int i;
	hash_node_t *tmp;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
	tmp = ht->array[i];
	while (tmp != NULL)
	{
	if (!adjustments)
	printf(", ");
	else
	adjustments = 0;

	printf("'%s': '%s'", tmp->key, tmp->value);
	tmp = tmp->next;
	}
	}
printf("}\n");
}
