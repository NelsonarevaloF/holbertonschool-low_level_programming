#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @min: first number of array
 * @max: second number of array
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int i, end;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	end = max - min;
	for (i = 0; i <= end; i++)
	{
		ptr[i] = min;
		min++;
	}

return (ptr);
}
