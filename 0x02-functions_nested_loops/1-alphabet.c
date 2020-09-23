#include <stdlib.h>
#include "holberton.h"

/**
 * print_alphabet - print the alphabet in lowercase
 * Return: no return
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
}
