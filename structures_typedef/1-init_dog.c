#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Write a function that initialize a variable of type struct dog
 * @d: the function that wec want to use it
 * @name: char name of the dog
 * @age: float age of the dog
 * @owner: char who is the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
