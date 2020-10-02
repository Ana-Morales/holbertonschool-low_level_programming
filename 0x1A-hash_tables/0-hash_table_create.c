#include "hash_tables.h"
/**
* hash_table_create -  creates a hash table.
* @size: the size of the array
*
* Return:  pointer to the newly created hash table. NULL is fail
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tb;
	unsigned long int i;

	tb = malloc(sizeof(hash_table_t));
	if (tb == NULL)
		return (NULL);
	tb->size = size;
	tb->array = malloc(size * sizeof(hash_node_t *));
	if (tb->array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tb->array[i] = NULL;
		i++;
	}
	return (tb);
}
