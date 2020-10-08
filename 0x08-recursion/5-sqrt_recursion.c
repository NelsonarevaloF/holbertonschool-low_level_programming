#include "holberton.h"

/**
 * find_sqrt - check each number start in 0
 * @n: number to find its natural square
 * @i: numbers to multiply
 * Return: square root
 */

int find_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (find_sqrt(n, i + 1));
}


/**
 * _sqrt_recursion - compute the natural square root of a number
 * @n: number to find its natural square
 * Return: natural square of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}
