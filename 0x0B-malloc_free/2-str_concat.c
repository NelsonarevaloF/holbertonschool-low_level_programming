#include "holberton.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i, j;
	char *cat;

	while (s1 && s1[size1] != '\0')
		size1++;
	while (s2 && s2[size2] != '\0')
		size2++;

	cat = malloc((sizeof(char) * (size1 + size2)) + 1);
	if (cat == NULL)
		return (NULL);

	if (size1 != 0)
	{
		if (size2 == 0)
			size1 += 1;
		else
			size2++;
		for (i = 0; i < size1; i++)
			cat[i] = s1[i];
	}
	if (size2 != 0)
	{
		if (size2 == 0)
			size2 += 1;
		for (j = 0; j < size2; j++)
		{
			cat[size1] = s2[j];
			size1++;
		}
	}
	return (cat);
}
