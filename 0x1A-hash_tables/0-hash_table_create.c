#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: the size of the array
 * Return: A pointer to the newly created hash table
 * and NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	table->array = malloc(size * sizeof(hash_node_t *));

	if (!table)
		return (NULL);
	if (!(table->array))
		return (NULL);
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	table->size = size;
	return (table);
}
