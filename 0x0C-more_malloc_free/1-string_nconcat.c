#include "holberton.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 * @n: quantity of bytes to concatenate
 * Return: pointer to the new string created (Success), or NULL (Error)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0, size2 = 0, i, j;
	char *cat;

	while (s1 && s1[size1] != '\0')
		size1++;
	while (s2 && s2[size2] != '\0')
		size2++;

	cat = malloc((sizeof(char) * (size1 + size2)) + 1);
	if (cat != NULL)
	{
		for (i = 0; i < size1; i++)
			cat[i] = s1[i];

		if (n >= size2)
		{
			for (j = 0; j < size2; j++)
			{
				cat[size1] = s2[j];
				size1++;
			}
		}
		else
		{
			for (j = 0; j < n; j++)
			{
				cat[size1] = s2[j];
				size1++;
			}
		}
		cat[size1] = '\0';
		return (cat);
	}
	else
		return (NULL);
}
