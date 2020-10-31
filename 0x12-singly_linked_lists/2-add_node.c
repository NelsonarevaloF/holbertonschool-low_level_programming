#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * of a list_t list
 * @head: pointer to head in a list
 * @str: string to copy
 * Return: pointer to the new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int i = 0;

	if (new_node == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
