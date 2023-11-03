#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of arrays
 * @size: size of array
 * return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = calloc(nmemb, size);
	if (str == NULL)
		return (NULL);
	else
		return (str);
}
