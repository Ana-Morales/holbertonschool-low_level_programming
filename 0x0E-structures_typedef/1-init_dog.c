#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: pointer to variable of type struct dog
 * @name: name value to initialize d.name
 * @age: age value to initialize d.age
 * @owner: owner value to initialize d.owner
 *
 * Return: Point to newly allocated space in mem with s1 + n bytes of s2
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
