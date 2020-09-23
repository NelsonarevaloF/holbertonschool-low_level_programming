#include <stdlib.h>
#include "holberton.h"

/**
 * _islower - checks if a character is lowercase
 * @c: character to evaluate
 * Return: if the character is lowercase return 1
 * otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
return (0);
}
