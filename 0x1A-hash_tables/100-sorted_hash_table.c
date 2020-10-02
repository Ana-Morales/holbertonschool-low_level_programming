#include "hash_tables.h"
/**
 * shash_table_create -  creates a sorted hash table.
 * @size: the size of the array
 *
 * Return:  pointer to the newly created hash table. NULL is fail
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *tb;
	unsigned long int i;

	tb = malloc(sizeof(shash_table_t));
	if (tb == NULL)
		return (NULL);
	tb->size = size;
	tb->array = malloc(size * sizeof(shash_node_t *));
	if (tb->array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tb->array[i] = NULL;
		i++;
	}
	tb->shead = NULL;
	tb->stail = NULL;
	return (tb);
}

/**
 * shash_table_set - adds or updated an element in a sorted hash table
 * @ht: sorted hash table you want to add or update the key/value to
 * @key: the key. key can not be an empty string
 * @value: value associated with the key. value must be duplicated.
 * value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *new, *tmp, *aux;

	if (ht == NULL || ht->array == NULL || key == NULL || value == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				free(tmp->value);
			return (1);
		}
		tmp = tmp->next;
	}
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
		return (0);
	new->value = strdup(value);
	if (new->value == NULL)
		return (0);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	if (ht->shead == NULL)
	{
		new->snext = NULL;
		new->sprev = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (hash_djb2((const unsigned char *)ht->shead->key) > hash_djb2((const unsigned char *)new->key))
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		aux = ht->shead;
		while (aux->snext != NULL && (hash_djb2((const unsigned char *)aux->snext->key) < hash_djb2((const unsigned char *)new->key)))
		{
			aux = aux->snext;
		}
		new->sprev = aux;
		new->snext = aux->snext;
		if (aux->snext != NULL)
			aux->snext->sprev = new;
		aux->snext = new;
		if (new->snext == NULL)
			ht->stail = new;
	}

	return (1);
}
/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht:  hash table to look into
 * @key: key
 *
 * Return:  the value associated with the element. NULL if key couldnt be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long idx;
	shash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || key == NULL || strlen(key) == 0)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
/**
 * shash_table_print -  prints a hash table.
 * @ht: hash table to print
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int count = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	tmp = ht->shead;
	printf("{");
	while (tmp != NULL)
	{
		if (count > 0)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		count++;
		tmp = tmp->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev -  prints a hash table in reverse.
 * @ht: hash table to print
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int count = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	tmp = ht->stail;
	printf("{");
	while (tmp != NULL)
	{
		if (count > 0)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		count++;
		tmp = tmp->sprev;
	}
	printf("}\n");

}
/**
 * shash_table_delete - deletes a sorted hash table.
 * @ht: hash table
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *tmp;

	if (ht == NULL || ht->array == NULL)
		return;
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			free(tmp->key);
			free(tmp->value);
			tmp = tmp->next;
			free(ht->array[i]);
			ht->array[i] = tmp;
		}
		free(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
}
