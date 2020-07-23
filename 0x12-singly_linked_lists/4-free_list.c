#include "lists.h"
/**
 * free_list -  frees a list_t list.
 * @head: pointer to old first node
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
