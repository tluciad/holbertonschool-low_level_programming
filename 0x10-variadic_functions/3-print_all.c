#include "variadic_functions.h"

/**
 * p_char - print char
 * @args: arg
 */
void p_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * p_int - print int
 * @args: arg
 */
void p_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * p_float - print float
 *@args: arg
 */
void p_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * p_str - print str
 * @args: arg
 */
void p_str(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("%p", str);
		return;
	}
	printf("%s", str);
}

/**
 * print_all - print all
 * @format: arg
 */
void print_all(const char *const format, ...)
{
	t_print type[] = {
		{'c', p_char},
		{'i', p_int},
		{'f', p_float},
		{'s', p_str}};

	int i, j;
	char *separator = "";

	va_list args;

	va_start(args, format);

	for (i = 0; format && format[i]; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if ((type[j].c) == format[i])
			{
				printf("%s", separator);
				type[j].t_func(args);
				separator = ", ";
			}
		}
	}
	printf("\n");
	va_end(args);
}
