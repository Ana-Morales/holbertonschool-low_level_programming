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
	char *n, *o;
	int len_n, len_o, i;

	i = 0;
	len_n = 0;
	while (name != '\0')
	{
		len_n++;
		i++;
	}
	n = malloc(sizeof(char) * (len_n + 1));
	if (n == NULL)
		return (NULL);
	i = 0;
	while (i < len_n)
	{
		n[i] = name[i];
		i++;
	}
	n[i] = '\0';
	i = 0;
	len_o = 0;
	o = malloc(sizeof(char) * (len_o + 1));
	if (o == NULL)
		return (NULL);
	i = 0;
	while (i < len_o)
	{
		o[i] = owner[i];
		i++;
	}
	o[i] = '\0';
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = n;
	p->age = age;
	p->owner = o;
	return (p);
}
