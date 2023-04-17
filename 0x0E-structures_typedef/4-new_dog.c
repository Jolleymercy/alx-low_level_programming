#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner.
 *
 * Return: new_dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	unsigned int name_len, owner_len, j = 0;

	unsigned int _strlen(char *str);
	if (!name || !owner)
		return (NULL);

	p = malloc(sizeof(dog_t));
	if (!p)
		return (NULL);

	name_len = _strlen(name) + 1;
	owner_len = _strlen(owner) + 1;

	p->name = malloc(name_len * sizeof(char));
	if (!(p->name))
		return (free(p), NULL);
	while (j < name_len)
	{
		p->name[j] = name[j];
		j++;
	}

	p->age = age;

	p->owner = malloc(owner_len * sizeof(char));
	if (!(p->owner))
		return (free(p->name), free(p), NULL);
	j = 0;
	while (j < owner_len)
	{
		p->owner[j] = owner[j];
		j++;
	}

	return (p);
}

/**
 * _strlen - returns length of a string.
 * @str: string whose length is to be returned.
 *
 * Return: length of string.
 */

unsigned int _strlen(char *str)
{
	unsigned int j = 0;

	while (*str++)
		j++;

	return (j);
}


