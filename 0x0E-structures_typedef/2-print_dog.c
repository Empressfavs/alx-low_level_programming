#include <stdio.h>
#include "dog.h"
/**
 * print_dog - a function that prints a struct dog
 * @d: A pointer to the struct dog
 *
 * Description: A function that prints the whole details of a dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("(nil)");
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", (*d).age);
		if (d->owner == NULL)
			printf("(nil)");
		printf("Owner: %s\n", d->owner);
	}
	if (d == NULL)
		printf(" ");
}
