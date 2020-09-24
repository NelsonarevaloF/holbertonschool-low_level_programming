#include "holberton.h"

/**
 * _isdigit - check if a character is number
 * @c: character to evaluate
 * Return: Returns 1 if c is a digit
 * Returns 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
