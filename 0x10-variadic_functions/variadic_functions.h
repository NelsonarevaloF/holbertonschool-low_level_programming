#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdlib.h>

typedef struct print
{
	char *c;
	void (*print_)(va_list list, char *separator);
} op_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_c (va_list list, char *separator);
void print_i (va_list list, char *separator);
void print_f (va_list list, char *separator);
void print_s (va_list list, char *separator);

#endif
