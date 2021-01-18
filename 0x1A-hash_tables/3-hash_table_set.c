#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key:  is the key
 * @value: value associated with the key
 * Return: 1 if success or 0 if fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL;

	if ((ht && key && value) && *key != '\0')
	{
		index = hash_djb2(key) % ht->size;
		if (ht->array[index] && ht->array[index]->key == ((char *)key))
		{
			ht->array[index]->value = strdup((char *)value);
			return (1);
		}
		new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (0);
		new_node->key = (char *)key;
		new_node->value = strdup((char *)value);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
	return (0);
}
