#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - a function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: string
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int str;

	va_list ptr;

	va_start(ptr, n);

	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, unsigned int);
		printf("%d", str);
		if (i < (n - 1))
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
