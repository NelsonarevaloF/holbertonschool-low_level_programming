#include "lists.h"

/**
 * add_dnodeint - adds a new node at beginning of a list
 * @head: pointer to a node
 * @n: date to the node
 * Return: pointer to new node or the new head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	if (*head == NULL)
	{
		*head =  malloc(sizeof(dlistint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->prev = NULL;
		(*head)->next = NULL;
		return (*head);
	}
	else
	{
		dlistint_t *new = malloc(sizeof(dlistint_t));

		new->n = n;
		new->prev = NULL;
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}

return (*head);
}
