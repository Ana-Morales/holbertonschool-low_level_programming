#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to old first node
 * @str: string to be copied to new_node->str
 *
 * Return: addres of the new element
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
