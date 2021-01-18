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
	char *dup_value = NULL;

	if ((ht && key && value) && *key != '\0')
	{
		dup_value = _strdup((char *)value);
		index = key_index((const unsigned char *)key, ht->size);
		if (ht->array[index] && ht->array[index]->key == ((char *)key))
		{
			ht->array[index]->value = dup_value;
			return (1);
		}
		new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (0);
		new_node->key = (char *)key;
		new_node->value = dup_value;
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
	return (0);
}
/**
 * _strdup - duplicates a string
 * @src: string to duplicate
 * Return: pointer to a string
 */
char *_strdup(char *src)
{
		char *dst = malloc(_strlen(src) + 1);

		if (dst == NULL)
			return (NULL);
		_strcpy(dst, src);
		return (dst);
}
/**
 * _strlen - return the length the a string
 * @s: is the pointer the variable "n"
 * Return: Always 1 (Success)
 */
int _strlen(char *s)
{
		int i;

		for (i = 0; s[i] != 0; i++)
		{}
		return (i);
}
/**
 * _strcpy - function that copies the string pointed to by
 * src
 * @dest: char*
 * @src: char *
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
		char a = 0;
		char b = 0;

		if (dest && src)
		{
			while (*(src + a))
				++a;
			if (src + a <= dest)
			{
				do {
					*(dest + b++) = *src++;
				} while (a--);
			}
			return (dest);
		}
return (dest);
}
