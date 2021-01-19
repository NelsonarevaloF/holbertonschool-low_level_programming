#include "hash_tables.h"
/**
 * hash_table_get - get the value of a specific key
 * @ht: table to search the key
 * @key:  is the key
 * Return: the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *aux = NULL;

	if ((ht && key) && *key != '\0')
	{
		index = key_index((const unsigned char *)key, ht->size);
		aux = ht->array[index];
		while (aux)
		{
			if (aux->key == (char *)key)
				return (aux->value);
			aux = aux->next;
		}
	}
	return (NULL);
}
