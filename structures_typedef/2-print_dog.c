#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if  (d == NULL)
	{
		printf("nil");
	}
	else if  (d->name == NULL)
	{
		printf("nil");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}