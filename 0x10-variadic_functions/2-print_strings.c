#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints strings
 * @separator: string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list argc;

	va_start(argc, n);

	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		str = va_arg(argc, char*);
			printf("%s", str);
		if (str == NULL)
			str = "nil";
		if (i < (n-1))
			printf("%s", separator);
	}
	va_end(argc);
	printf("\n");
}
