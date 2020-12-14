#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer to a node
 * @n: date to the node
 * Return: pointer to new node or the new end
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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

		if (new != NULL)
		{
			dlistint_t *aux = *head;

			while (aux->next != NULL)
				aux = aux->next;
			new->n = n;
			new->prev = aux;
			new->next = NULL;
			aux->next = new;
		}
	}

return (*head);
}
