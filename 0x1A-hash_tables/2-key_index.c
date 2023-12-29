#include "hash_tables.h"

/**
 * key_index - key_index
 * @key: string that we store in our node->key
 * @size: the size of the array of linked-lists
 * Return: the index which we store
 *
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
