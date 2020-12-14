#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to a struct or node
 * Return: No return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux2 = NULL;

	while (head != NULL)
	{
		aux2 = head->next;
		free(head);
		head = aux2;
	}
}
