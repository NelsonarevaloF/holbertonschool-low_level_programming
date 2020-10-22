#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * @array: array of parameters to some function
 * @size: number of characters to evaluate
 * @action: pointer to function
 * Return: No Return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
