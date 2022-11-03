#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - print anew name and new owner
 *@name: char
 *@age: float 
 *@owner: char 
 *Return: new_dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *new_dog;

	int a = strlen(name);
	int b = strlen(owner);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = malloc(sizeof(char *) * (a + 1));

	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);

	new_dog->age = age;

	new_dog->owner = malloc(sizeof(char *) * (b + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);

	return (new_dog);
}