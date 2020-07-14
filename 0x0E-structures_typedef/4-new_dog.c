#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: string to get its length
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i, len;

	i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
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
	int len_n, len_o, i;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		return (NULL);
	}
	len_n = _strlen(name);
	p->name = malloc(sizeof(char) * (len_n + 1));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	i = 0;
	while (i < len_n)
	{
		p->name[i] = name[i];
		i++;
	}
	p->name[i] = '\0';
	i = 0;
	len_o = _strlen(owner);
	p->owner = malloc(sizeof(char) * (len_o + 1));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
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
