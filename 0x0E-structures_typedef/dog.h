#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - contain the name, age and owner of dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*_DOG_H*/
