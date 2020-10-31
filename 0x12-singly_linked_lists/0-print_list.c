#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to head of list
 * Return: number of elements in a list
 */

size_t print_list(const list_t *h)
{
	const list_t *new = h;
	size_t count = 0;

	while (new != NULL)
	{
		if (new->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] ", new->len);
			printf("%s\n", new->str);
		}
		count += 1;
		new = new->next;
	}
	return (count);
}
