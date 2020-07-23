#include "lists.h"
/**
 * _strlen - returns the length of a string
 * @s: string to get its length
 * Return: the length of the string
 */
unsigned int _strlen(const char *s)
{
	unsigned int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to old first node
 * @str: string to be copied to new_node->str
 *
 * Return: addres of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
