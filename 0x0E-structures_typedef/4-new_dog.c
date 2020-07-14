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
	int len_n = 0, len_o = 0, i;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (name[i] != '\0')
	{
		len_n++;
		i++;
	}
	p->name = malloc(sizeof(char) * (len_n + 1));
	if (p->name == NULL)
		return (NULL);
	i = 0;
	while (i < len_n)
	{
		p->name[i] = name[i];
		i++;
	}
	p->name[i] = '\0';
	i = 0;
	while (owner[i] != '\0')
	{
		len_o++;
		i++;
	}
	p->owner = malloc(sizeof(char) * (len_o + 1));
	if (p->owner == NULL)
		return (NULL);
	i = 0;
	while (i < len_o)
	{
		p->owner[i] = owner[i];
		i++;
	}
	p->owner[i] = '\0';
	p->age = age;
	return (p);
}
