#include <stdio.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type
 * @d: The struct of the dog
 * @name: The name of the dog
 * @age: Th age of the dog
 * @owner: The owner of the dog
 *
 * Description: This is a function that shows the whole details of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
