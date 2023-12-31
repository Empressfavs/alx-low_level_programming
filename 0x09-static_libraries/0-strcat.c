#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: This is a string
 * @src: This is a string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
