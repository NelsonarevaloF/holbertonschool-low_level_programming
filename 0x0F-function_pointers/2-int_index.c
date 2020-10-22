#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of numbers to be evaluates
 * @size: number of characters to evaluate
 * @cmp: pointer to function
 * Return: No Return
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (!array || !cmp)
		return;

	for (i = 0; i < size && size > 0; i++)
	{
		res = cmp(array[i]);
		if (res != 0)
			return (i);
	}
	return (-1);
}
