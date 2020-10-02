#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: he index at which the key/value pair should be stored
 * in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int val;
	unsigned long int idx;

	val = hash_djb2(key);
	idx = val % size;
	return (idx);
}
