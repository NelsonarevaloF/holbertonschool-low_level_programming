#include "holberton.h"

/**
 * _pow_recursion - compute the pow of a number
 * @x: number
 * @y: pow
 * Return: pow of n
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
