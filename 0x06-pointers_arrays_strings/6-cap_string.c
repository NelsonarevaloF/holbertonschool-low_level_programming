#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to change
 * Return: string already changed
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char characters[] = {' ', '\t', '\n', ',', ';', '.', '!',
	'?', '"', '(', ')', '{', '}', '\0'};

	while (s[i])
	{
		j = 0;
		while (characters[j] != '\0')
		{
			if (s[i] == characters[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] += -32;
			}
			j++;
		}
		i++;
	}
	return (s);
}
