#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * @d: pointer to structure type of dog.
 * @name: pointer to char (dog name).
 * @age: pointer to dog age char.
 * @owner: pointer to char (dog's owner).
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
