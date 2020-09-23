#include <stdlib.h>
#include "holberton.h"

/**
 * print_last_digit - print the last number of an integer
 * @n: integer
 * Return: the last number of an integer
 */
int print_last_digit(int n)
{
	int lastNumber = n;

	if (lastNumber < 0)
		lastNumber = n * -1;
	_putchar('0' + (lastNumber % 10));
	return (lastNumber % 10);
}
