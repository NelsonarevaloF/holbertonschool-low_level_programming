#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to change
 * @b: pointer to change
 * Return: No return
 */

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
