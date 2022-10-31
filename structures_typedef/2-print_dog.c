#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("NULL");
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