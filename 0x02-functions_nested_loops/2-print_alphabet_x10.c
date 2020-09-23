#include <stdlib.h>
#include "holberton.h"

/**
 * print_alphabet_x10 - print the alphabet in lowercase 10 times
 * Return: no return
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int times10 = 0;

	for (; times10 < 10; times10++)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
	}
}
