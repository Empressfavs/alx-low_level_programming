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
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
