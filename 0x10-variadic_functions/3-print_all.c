#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * p_char - print char
 * @args: argument
 */
void p_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * p_int - print int
 *@args: argument
 */
void p_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * p_float - print float
 *@args: argument
 */
void p_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * p_str - print str
 * @args: argument
 */
void p_str(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		str = ("(nil)");
	printf("%s", str);
}

/**
 * print_all - print all
 * @format: a list of types of arguments passes to the function
 */
void print_all(const char *const format, ...)
{
	t_print type[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_str}};

	int i = 0, j;
	char *separator = "";

	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (*(type[j].c) == format[i])
			{
				printf("%s", separator);
				type[j].t_func(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
