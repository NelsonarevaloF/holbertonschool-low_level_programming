#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: The size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	hash_node_t **new_array = NULL;

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

	new_array = malloc(sizeof(new_array) * 1024);
	if (!new_array)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;
	new_table->array = new_array;
	return (new_table);
}
