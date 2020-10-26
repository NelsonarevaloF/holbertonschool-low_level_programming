#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: list of types of arguments
 * return: No return
 */

void print_all(const char * const format, ...)
{
	va_list opc;
	op_t type[] = {
	{"c", print_c},
	{"i", print_i},
	{"f", print_f},
	{"s", print_s},
	{NULL, NULL}
	};
	int i = 0, j;
	char *separator = "";

	va_start(opc, format);

	while (format[i] && format)
	{
		j = 0;
		while (type[j].c != NULL)
		{
			if (format[i] == type[j].c[0])
			{
				type[j].print_(opc, separator);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(opc);
	printf("\n");
}

/**
 * print_c - prints a character.
 * @list: parameter to prints
 * @separator: separator between the parameters
 */

void print_c(va_list list, char *separator)
{
	printf("%s%c", separator, va_arg(list, int));
}

/**
 * print_i - prints a integer
 * @list: parameter to prints
 * @separator: separator between the parameters
 */

void print_i(va_list list, char *separator)
{
	printf("%s%d", separator, va_arg(list, int));
}

/**
 * print_f - prints a float
 * @list: parameter to prints
 * @separator: separator between the parameters
 */

void print_f(va_list list, char *separator)
{
	printf("%s%f", separator, va_arg(list, double));
}

/**
 * print_s - prints a string
 * @list: parameter to prints
 * @separator: separator between the parameters
 */

void print_s(va_list list, char *separator)
{
	char *s = va_arg(list, char *);

	if (s)
	{
		printf("%s%s", separator, s);
		return;
	}
	printf("%s(nil)", separator);
}
