#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints all the numbers.
 * @separator: work to separate between of numbers
 * @n: numbers to parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;

	if (n == 0)
		exit(0);

	va_start(print, n);
	if (separator)
	{
		for (i = 0; i < n; i++)
		{
			if (i + 1 != n)
			{
				printf("%d", va_arg(print, int));
				printf("%s", separator);
			}
			else
				printf("%d", va_arg(print, int));
		}
	}
	else
		for (i = 0; i < n; i++)
			printf("%d", va_arg(print, int));

	printf("\n");
}
