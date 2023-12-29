
#include "hash_tables.h"

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

	if (ptr == NULL)
		return (NULL);

	ptr->array = malloc(size * sizeof(hash_node_t *));
	if (ptr->array == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
