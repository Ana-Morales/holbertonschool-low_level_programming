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
 * add_node_end -  adds a new node at the end of a list_t list
 * @head: pointer to old first node
 * @str: string to be copied to new_node->str
 *
 * Return: addres of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;

	last_node = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (last_node);
}
