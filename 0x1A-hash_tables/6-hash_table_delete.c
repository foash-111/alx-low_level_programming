#include "hash_tables.h"

/**
 * hash_table_delete - hash_table_delete
 * @ht: pointer to my array of pointers(to my hash table)
 * Return: (void)..(nothing)
 */

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *current = NULL, *head = NULL;
unsigned long int i = 0;

if (ht)
{
	while (i < ht->size)
	{
		head = ht->array[i];
		while (head)
		{
			current = head;
			head = head->next;
			free(current->key);
			free(current->value);
			free(current);
		}

		i++;
	}
	free(ht->array);
	free(ht);
}
}
