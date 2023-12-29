
#include "hashtable.h"

/**
 * hash_table_create - hash_table_create
 * @size: the size of the array whose each node in that array contain
 * a pointer to a linked list
 * Return: pointer to the hash_table
 * (the array of pointer--each of them points to linked list)
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr = malloc(sizeof(hash_table_t));

	ptr->array = malloc(sizeof(hash_node_t) * size);
	ptr->array = {NULL};
	return (ptr);
}
