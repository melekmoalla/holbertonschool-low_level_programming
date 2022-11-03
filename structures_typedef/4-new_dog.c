#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *new_dog;

	int a = strlen(name);
	int b = strlen(owner);
	new_dog = malloc(sizeof(dog_t));

	new_dog->name = malloc(sizeof(char *) * (a + 1));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);

	if (new_dog->name == NULL)
	{
		free(name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = malloc(sizeof(char *) * (b + 1));
	strcpy(new_dog->owner, owner);
	if (new_dog->owner == NULL)
	{
		free(name);
		free(owner);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
	free(new_dog->name);
	free(new_dog->owner);
	free(new_dog);
	return (new_dog);
}