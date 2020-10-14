#include "holberton.h"

/**
 * create_array - create an array and and
 * initializes it with a specific char
 * @size: size the array
 * @c: character to initializes
 * Return: pointer to array already initializes
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
