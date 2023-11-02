#include <stdlib.h>
#include  <stddef.h>
#include "main.h"
/**
* malloc_checked -  a function that allocates memory using malloc
* @b: allocated memory
* Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	char *i = malloc(b);

	if (i == NULL)
		exit(98);
	else
		return (i);
}
