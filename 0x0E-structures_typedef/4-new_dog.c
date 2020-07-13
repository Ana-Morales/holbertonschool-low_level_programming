#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 *Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	char *n;
	char *o;

	n = name;
	o = owner;

	if (n == NULL || o == NULL)
		return (NULL);
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = n;
	p->age = age;
	p->owner = o;
	return (p);
}
