#include "main.h"
/**
 * print_rev -  a function that prints a string, in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int length = 0;
	int b;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (b = length; b > 0; b--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
