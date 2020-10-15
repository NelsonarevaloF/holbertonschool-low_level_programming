#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: quantity of bytes to allocate
 * Return: No return
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
