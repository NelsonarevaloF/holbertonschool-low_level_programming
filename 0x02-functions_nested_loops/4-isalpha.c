#include <stdlib.h>
#include "holberton.h"

/**
 * _isalpha - checks if the character is letter
 * @c: character to evaluate
 * Return: if the character is letter return 1
 * otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
return (0);
}
