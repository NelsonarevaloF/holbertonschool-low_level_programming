#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints all the strings.
 * @separator: it work to separate the numbers
 * @n: numbers to parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;
	char *string;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(print, char *);
		if (!string)
			string = "(nil)";
		if (!separator)
			printf("%s", string);
		else if (separator && i + 1 == n)
			printf("%s", string);
		else
			printf("%s%s", string, separator);
	}
	printf("\n");
}
