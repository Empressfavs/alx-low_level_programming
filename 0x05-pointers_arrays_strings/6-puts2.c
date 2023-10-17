#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * @str: input value
 * Return: print
 */
void puts2(char *str)
{
	int length = 0;
	int a = 0;
	char *s = str;
	int b;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	a = length - 1;
	for (b = 0; b <= a; b++)
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
