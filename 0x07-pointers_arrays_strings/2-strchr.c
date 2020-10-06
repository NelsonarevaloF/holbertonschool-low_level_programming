#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: in this array we are going to search.
 * @c: character to search.
 * Return: pointer to character found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
