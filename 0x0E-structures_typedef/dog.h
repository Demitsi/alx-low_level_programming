#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Is a function which initialises a variable of type struct dog.
 * @d: Is a struct to initialise
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
