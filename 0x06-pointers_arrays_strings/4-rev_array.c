#include "holberton.h"

/**
 * reverse_array - compares two strings
 * @a: first string
 * @n: second string
 * Return: difference in quantity
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int temporal = 0;

	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		temporal = a[i];
		a[i] = a[j];
		a[j] = temporal;
	}
}
