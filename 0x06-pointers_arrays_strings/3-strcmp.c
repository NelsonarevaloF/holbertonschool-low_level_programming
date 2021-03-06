#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: difference in quantity
 */

int _strcmp(char *s1, char *s2)
{
	int cont1 = 0;

	while (s1[cont1] == s2[cont1])
	{
		if (s1[cont1] == '\0')
			return (0);
		cont1++;
	}
	return (s1[cont1] - s2[cont1]);
}
