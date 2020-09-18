#include <stdlib.h>
#include <stdio.h>
/**
 * main - choose if the number is positive or negative
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
