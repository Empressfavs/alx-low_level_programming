#include "main.h"
/**
 * _puts -  a function that prints a string, followed by a new line
 * @s: string to print
 * Return: void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
