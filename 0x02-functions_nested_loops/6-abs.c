#include <stdlib.h>
#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: number to which we have that find the absolute value
 * Return: the absolute value 
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	if (n == 0)
		return (0);
	else
		return (n);
}
