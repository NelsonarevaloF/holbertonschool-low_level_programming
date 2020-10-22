#include "function_pointers.h"

/**
 * print_name - prints a string
 * @name: name of the person
 * @f: pointer to function
 * Return: No Return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || !f)
		return;
	f(name);
}
