#include <stdio.h>
#include "dog.h"
/**
 * print_dog - unction that prints a struct dog
 * @d: for the function struct to use it in fnction print
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	else if (d->name == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
