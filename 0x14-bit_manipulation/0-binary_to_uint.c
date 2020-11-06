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

/**
 * binary_to_uint - converts a number from binary
 * to decimal
 * @b: pointer to string of characters
 * Return: number already converted
 */

unsigned int binary_to_uint(const char *b)
{
	int i, exp = 0;
	unsigned int bin_to_dec = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	while (i >= 0)
	{
		if (b[i - 1] == '1')
			bin_to_dec += _pow_recursion(2, exp);
		exp++;
		i--;
	}
	return (bin_to_dec);
}
