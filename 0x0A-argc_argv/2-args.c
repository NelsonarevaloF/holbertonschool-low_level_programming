#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * @argc: size of argv
 * @argv: arguments from commands line
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
