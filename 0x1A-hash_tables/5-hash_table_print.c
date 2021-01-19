#include "hash_tables.h"
/**
 * hash_table_print - prints a table
 * @ht: list to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *aux = NULL;

	if (ht && ht->array)
	{
		printf("{");
		aux = search_nodes(ht->array, ht->size);
		while (aux)
		{
			printf("'%s': '%s'", aux->key, aux->value);
			if (aux->next != NULL)
				printf(", ");
			aux = aux->next;
		}
		printf("}\n");
	}
}
/**
 * search_nodes - search the nodes fill
 * @array: array to evaluate
 * @size: size of array
 * Return: a new list with the nodes found
 */
hash_node_t *search_nodes(hash_node_t **array, unsigned long int size)
{
	hash_node_t *aux = NULL;
	hash_node_t *aux2 = NULL;
	int success_node = 0;
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		aux2 = array[i];
		while (aux2)
		{
			success_node = add_node_end(&aux, aux2->key, aux2->value);
			if (!success_node)
				return (NULL);
			aux2 = aux2->next;
		}
	}
	return (aux);
}
/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the hash_node_t list
 * @key: string to put in the new node
 * @value: value of the key
 * Return: address of the new element, or NULL if it failed
 */
int add_node_end(hash_node_t **head, char *key, char *value)
{
	hash_node_t *new;
	hash_node_t *temp = *head;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = key;
	new->value = value;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (1);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (1);
}
