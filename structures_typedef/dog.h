#ifndef INV_TREE_H
#define INV_TREE_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Define a new type
 * @name: char name of the dog
 * @age: float age of the dog
 * @owner: char who is the owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
