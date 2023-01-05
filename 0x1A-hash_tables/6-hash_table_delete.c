#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *node;

	if (ht == NULL)
		exit(1);
	for (i = 0; i < ht->size; i++)
	{
		if (node != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				node = node->next,
				free(node->key);
				free(node->value);
				free(node);
			}
		}
	}
	free(ht->array);
	free(ht);
}
