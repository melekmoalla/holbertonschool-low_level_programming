#include "dog.h"

/**
 * free_dog - free the function that we locate a memory
 * @d: for the fonction in gog .h struct
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
	}
	else
	{

		free(d->name);
		free(d->owner);
		free(d);
	}
}
