#include "main.h"
#include <string.h>
/**
 * _strncat -  a function that concatenates two strings
 * @dest: string to concatenate
 * @src: string to concatenate
 * @n: value to concatenate
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	n = 1;

	strncat(dest, src, n);
	return (dest);
}
