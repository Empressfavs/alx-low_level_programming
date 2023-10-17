#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s - pointeer to a null-terminated string
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
