#ifndef _VAR_
#define _VAR_

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print - prints anything
 * @c: arguments
 * @t_func: pointer to the functions that prints all
 */
typedef struct print
{
	char *c;
	void (*t_func)(va_list args);
} t_print;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
int _putchar(char c);

#endif
