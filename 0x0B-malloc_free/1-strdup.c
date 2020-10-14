#include "holberton.h"

/**
 * _strdup - duplicate a string
 * @str: string to copy
 * Return: string already copy
 */

char *_strdup(char *str)
{
	int size, i;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
	{}
	dup = malloc((sizeof(char) * size) + 1);
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		dup[i] = str[i];

	return (dup);
}
