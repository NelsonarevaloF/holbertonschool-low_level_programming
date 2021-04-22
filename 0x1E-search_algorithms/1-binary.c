#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array:  is a pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int med;

	if (array != NULL)
	{
		while (left <= right)
		{
			med = (left + right) / 2;
			print_array(array, left, right);
			if (array[med] < value)
				left = med + 1;
			else if (array[med] > value)
				right = med - 1;
			else
				return (med);
		}
	}
	return (-1);
}

/**
 * print_array - prints a array
 * @array: array to prints
 * @left: depending the main function the left value will change
 * @right: depending the main function the right value will change
 */
void print_array(int *array, int left, int right)
{
	printf("Searching in array: ");
	while (left <= right)
	{
		if ((left) != right)
			printf("%d, ", array[left]);
		else
			printf("%d", array[left]);
		left++;
	}
	printf("\n");
}
